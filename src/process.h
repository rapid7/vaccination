#include <windows.h>
#include <tlhelp32.h>

BOOL IsProcessRunning(const wchar_t *processName)
{
    char processNameA[wcslen(processName)+1];
    wcstombs(processNameA, processName, wcslen(processName)+1);

    BOOL exists = FALSE;
    PROCESSENTRY32 entry;
    entry.dwSize = sizeof(PROCESSENTRY32);

    HANDLE snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

    if (Process32First(snapshot, &entry))
        while (Process32Next(snapshot, &entry))
            if (!strcmp(entry.szExeFile, processNameA))
                exists = TRUE;

    CloseHandle(snapshot);
    return exists;
}

BOOL StartProcess(char * path)
{
    PROCESS_INFORMATION processInformation;
    STARTUPINFO startupInfo;
    memset(&processInformation, 0, sizeof(processInformation));
    memset(&startupInfo, 0, sizeof(startupInfo));
    startupInfo.cb = sizeof(startupInfo);

    char szCmdline[strlen(path)*2];
    strcpy(szCmdline, path);

    return CreateProcess(path, szCmdline, NULL, NULL, FALSE, 
        NORMAL_PRIORITY_CLASS, NULL, NULL, &startupInfo, &processInformation);
}
