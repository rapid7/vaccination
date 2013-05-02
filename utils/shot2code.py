#!/usr/bin/python

import os
import re
import sys
import string

SEP = "----------------------------------"
BINARY_REGEX = "([0-9A-F]{2}[ ])+[0-9A-F]{2}"

TPL_FILE = """    ret = {func}({path}{args});
"""
#    printf("ret: %d from creating {path2}\\n", ret);

TPL_REG = """    ret = registry_add({hkey}, "{subkey}", "{vname}", {value}, {vsize}, {vtype});
"""
#    printf("ret: %d from registry value {hkey}/{subkey}\\n", ret);

KEYMAP = {
    "HKLM": "HKEY_LOCAL_MACHINE",
    "HKCU": "HKEY_CURRENT_USER",
}

HEADERS = {
    "virtualbox" :
"""
#include "../shipped.h"
#include "../registry.h"
#include "../process.h"
#include "../utils.h"

extern char vbox_start        asm("_binary_build_vbox_exe_start");
extern char vbox_end          asm("_binary_build_vbox_exe_end");
extern unsigned int vbox_size asm("_binary_build_vbox_exe_size");

void fake_virtualbox() {
    int ret;
    DWORD value;

    char * exe_start = &vbox_start;
    char * exe_end = &vbox_end;

""",
    "vmware" :
"""
#include "../shipped.h"
#include "../registry.h"
#include "../process.h"
#include "../utils.h"

extern char vmware_start        asm("_binary_build_vmware_exe_start");
extern char vmware_end          asm("_binary_build_vmware_exe_end");
extern unsigned int vmware_size asm("_binary_build_vmware_exe_size");

void fake_vmware() {
    int ret;
    DWORD value;

    char * exe_start = &vmware_start;
    char * exe_end = &vmware_end;

""",
}

FOOTERS = {
    "virtualbox" :
r"""
    BOOL ret2 = IsProcessRunning(L"VBoxTray.exe");
    if (!ret2) {
        ret2 = StartProcess(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxTray.exe"));
    }
}
""",
    "vmware" :
r"""
    BOOL ret2 = IsProcessRunning(L"vmtoolsd.exe");
    if (!ret2) {
        ret2 = StartProcess(progfiles_path("\\VMware\\VMware Tools\\vmtoolsd.exe"));
    }
}
""",
}

class Ignore(Exception):
    pass

def addquotes(x):
    if x.startswith('"'): return x
    return '"' + x + '"'

def only_printable(x):
    for c in x:
        if c not in string.printable: return False
    return True

def env_replace(line):
    if "C:\\WINDOWS" in line:
        return "system_path({0})".format(addquotes(line.replace("C:\\WINDOWS", "")))
    if "C:\\Program Files" in line:
        return "progfiles_path({0})".format(addquotes(line.replace("C:\\Program Files", "")))
        
    return addquotes(line)

def get_sections(regshot):
    out = {}
    pos = 0
    while pos < len(regshot) and pos != -1:
        pos = regshot.find(SEP, pos)
        pos += len(SEP)
        next = regshot.find(SEP, pos)

        # get section title
        title = regshot[pos:next].strip().split(":")[0]

        next += len(SEP)
        pos = regshot.find(SEP, next)

        # content of current section
        content = regshot[next:pos]

        out[title] = content

    return out

def makelines(data):
    lines = data.splitlines()
    for line in lines:
        line = line.strip()
        if not line: continue
        yield line

def generate_files_code(data):
    for line in makelines(data):
        fn = "copy_random_to"
        args = ""
        if line.endswith(".exe"):
            fn = "copy_exe_to"
            args = ", exe_start, exe_end"
        elif line.endswith(".dll"):
            fn = "copy_dll_to"

        new = env_replace(line)

        new = new.replace("\\", "\\\\")
        print TPL_FILE.format(func=fn, args=args, path=new, path2=line.replace("\\", "\\\\"))

def generate_registry_code(data):
    for line in makelines(data):
        try:
            path, value = line.split(": ", 1)
        except:
            print >>sys.stderr, "ERRONEUS LINE", line
            raise

        key = KEYMAP[path.split("\\", 1)[0]]
        subkey = r"\\".join( path.split("\\")[1:-1] )
        vname = path.split("\\")[-1]

        try:
            realvalue, vsize, vtype = registry_transform_value(value)
        except Ignore:
            continue

        print TPL_REG.format(hkey=key, subkey=subkey, vname=vname, value=realvalue, vsize=vsize, vtype=vtype)

def registry_transform_value(v):
    v = v.strip()
    if v.startswith("0x"):
        print "    value = {0};".format(v)
        return "(void *) &value", 4, "REG_DWORD"
    if v.startswith('"'):
        v = env_replace(v).replace("\\", "\\\\")
        return v, len(v)-1, "REG_SZ"
    if re.match(BINARY_REGEX, v):
        # decode, then create { byte, byte } notation
        decoded = v.replace(" ", "").decode('hex')

        if decoded.count("\0") >= len(decoded) / 2:
            # unicode string, given as hexdump from regshot
            try:
                asciistr = decoded.decode("utf16")
            except:
                pass
            else:
                if not only_printable(asciistr): raise Ignore()

                asciistr = env_replace(asciistr)
                asciistr = asciistr.replace("\\", "\\\\")

                return asciistr, len(asciistr)+1, "REG_SZ"

        bytenotation = r'"\x' + r"\x".join(i.encode('hex') for i in decoded) + '"'
        return bytenotation, len(decoded), "REG_BINARY"

    print >>sys.stderr, "DBG", repr(v)

    raise Exception("unknown value format")

def main():
    virt_type = sys.argv[1]
    content = open(sys.argv[2]).read()
    sections = get_sections(content)

    print HEADERS[virt_type]

    for title, content in sections.items():
        if title == 'Files added':
            generate_files_code(content)
        elif title == 'Values added':
            generate_registry_code(content)

    print FOOTERS[virt_type]

    return 0

if __name__ == "__main__":
    try: sys.exit(main())
    except KeyboardInterrupt: pass
