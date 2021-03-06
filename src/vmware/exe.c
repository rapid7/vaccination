#include <windows.h>
#include <stdio.h>

#include "../process.h"
#include "../utils.h"

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nShowCmd)
{ 
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

    Sleep(INFINITE);
    return 0;
}
