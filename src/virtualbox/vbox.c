#include <windows.h>
#include <stdio.h>

#include "../process.h"
#include "../utils.h"

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nShowCmd)
{
    BOOL ret = IsProcessRunning(L"VBoxTray.exe");
    if (!ret) {
        char * fullpath = progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxTray.exe");
        ret = StartProcess(fullpath);
    }
    ret = IsProcessRunning(L"VBoxService.exe");
    if (!ret) {
        char * fullpath = system_path("\\system32\\VBoxService.exe");
        ret = StartProcess(fullpath);
    }

    while (1) {
        Sleep(60000);
    }
    return 0;
}
