#include <windows.h>
#include <stdio.h>

#include "../process.h"
#include "../utils.h"

int main(int argc, char **argv) {

    BOOL ret = IsProcessRunning(L"vmtoolsd.exe");
    if (!ret) {
        char * fullpath = progfiles_path("\\VMware\\VMware Tools\\vmtoolsd.exe");
        ret = StartProcess(fullpath);
    }
    ret = IsProcessRunning(L"vmacthlp.exe");
    if (!ret) {
        char * fullpath = progfiles_path("\\VMware\\VMware Tools\\vmacthlp.exe");
        ret = StartProcess(fullpath);
    }

    while (1) {
        Sleep(60000);
    }
    return 0;
}
