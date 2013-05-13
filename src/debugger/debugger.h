
#include "../shipped.h"
#include "../registry.h"
#include "../process.h"
#include "../utils.h"

extern char dbg_start        asm("_binary_build_debugger_exe_start");
extern char dbg_end          asm("_binary_build_debugger_exe_end");
extern unsigned int dbg_size asm("_binary_build_debugger_exe_size");

void fake_debugger() {
    int ret;
    UNUSED(ret);

    char * exe_start = &dbg_start;
    char * exe_end = &dbg_end;

    ret = copy_exe_to(progfiles_path("\\ollydbg\\ollydbg.exe"), exe_start, exe_end);

    BOOL ret2 = IsProcessRunning(L"ollydbg.exe");
    if (!ret2) {
        ret2 = StartProcess(progfiles_path("\\ollydbg\\ollydbg.exe"));
    }
}
