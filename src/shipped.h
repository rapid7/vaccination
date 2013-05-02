#ifndef SHIPPEDH
#define SHIPPEDH

#include <stdio.h>
#include <dbghelp.h>

extern char dll_data      asm("_binary_build_empty_dll_start");
extern char dll_data_end  asm("_binary_build_empty_dll_end");
extern unsigned int dll_data_size asm("_binary_build_empty_dll_size");

BOOL FileExists(LPCTSTR szPath)
{
  DWORD dwAttrib = GetFileAttributes(szPath);

  return (dwAttrib != INVALID_FILE_ATTRIBUTES && 
         !(dwAttrib & FILE_ATTRIBUTE_DIRECTORY));
}

int copy_raw(char * path, char * startp, char * endp) {
    BOOL ret;
    // if file exists, bail out
    ret = FileExists(path);
    if (ret) return 0;

    ret = MakeSureDirectoryPathExists(path);
    if (!ret) return 0;

    FILE * fp = fopen(path, "wb");
    size_t r = 0;
    char * pos = startp;

    if (!fp) return 0;

    while (pos < endp) {
        r = fwrite(pos, 1, endp-pos, fp);
        pos += r;
    }
    
    fclose(fp);
    return 1;
}

void random_ascii(char * buf, unsigned char length) {
    const char *hex = "0123456789ABCDEF";
    int i;

    for (i = 0; i < length; i++) {
        buf[i] = hex[rand() % 16];
    }
}

int copy_random_to(char * path) {
    unsigned char len = rand() & 0xff;
    char buf[len];
    random_ascii(buf, len);
    return copy_raw(path, buf, buf+len);
}

int copy_exe_to(char * path, char * bin_data, char * bin_data_end) {
    return copy_raw(path, bin_data, bin_data_end);
}

int copy_dll_to(char * path) {
    return copy_raw(path, &dll_data, &dll_data_end);
}

#endif
