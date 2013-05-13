#include <windows.h>
#include <stdio.h>

#include "../process.h"
#include "../utils.h"

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nShowCmd)
{ 
    BOOL ret = IsProcessRunning(L"ollydbg.exe");
    if (!ret) {
        char * fullpath = progfiles_path("\\ollydbg\\ollydbg.exe");
        ret = StartProcess(fullpath);
    }

    while (1) {
        Sleep(60000);
    }
    return 0;
}
