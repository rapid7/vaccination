// Windows Service main application
// Add your code where necessary to create your own windows service application.

#include <windows.h>
#include <stdio.h>

// Replace with your own
#define NAME_IN_SERVICES TEXT("MyService")
#define MY_SERVICE_DESC TEXT("Replace with a description of your service.")
#define DAEMON_EXE_NAME "C:\\The\\Full\\Path\\to\\MyDaemon.exe"

// Some global vars
SERVICE_STATUS          gStatus;
SERVICE_STATUS_HANDLE   gStatusHandle;
HANDLE                  ghStopEvent = NULL;

void InstallService() {
  SC_HANDLE hSCMgr;
  SC_HANDLE hService;
  TCHAR ExeAddr[MAX_PATH];
  SERVICE_DESCRIPTION sd;
  LPTSTR Desc = MY_SERVICE_DESC;

  if (! GetModuleFileName(NULL, ExeAddr, MAX_PATH)) {
    printf("Cannot install service.\n");
    return;
  }

  hSCMgr = OpenSCManager(NULL, NULL, SC_MANAGER_ALL_ACCESS);
  if (hSCMgr == NULL) {
    printf("OpenSCManager failed\n");
    return;
  }

  hService = CreateService(hSCMgr, NAME_IN_SERVICES, NAME_IN_SERVICES, SERVICE_ALL_ACCESS,
                           SERVICE_WIN32_OWN_PROCESS, SERVICE_AUTO_START, SERVICE_ERROR_NORMAL,
                           ExeAddr, NULL, NULL, NULL, NULL, NULL);

  if (hService == NULL) {
    printf("CreateService failed (%s)\n", ExeAddr);
    CloseServiceHandle(hSCMgr);
    return;
  }
  else
    printf("Service successfully installed.\nExecutable: %s\n", ExeAddr);

  // Now, to change its description
  sd.lpDescription = Desc;
  if (! ChangeServiceConfig2(hService, SERVICE_CONFIG_DESCRIPTION, &sd))
    printf("ChangeServiceConfig2 failed.\n");

  CloseServiceHandle(hService);
  CloseServiceHandle(hSCMgr);
}

void UninstallService() {
  SC_HANDLE hSCMgr;
  SC_HANDLE hService;

  hSCMgr = OpenSCManager(NULL, NULL, SC_MANAGER_ALL_ACCESS);
  if (NULL == hSCMgr) {
    printf("OpenSCManager failed\n");
    return;
  }

  hService = OpenService(hSCMgr, NAME_IN_SERVICES, DELETE);
  if (hService == NULL) {
    printf("OpenService failed\n");
    CloseServiceHandle(hSCMgr);
    return;
  }

  if (! DeleteService(hService))
    printf("Fallo DeleteService (%d)\n", (int) GetLastError());
  else
    printf("Service uninstalled successfully.\nYou must restart windows for changes to take effect.\n");

  CloseServiceHandle(hService);
  CloseServiceHandle(hSCMgr);
}

void MySetServiceStatus( DWORD State, DWORD ExitCode, DWORD Wait ) {
  gStatus.dwCurrentState = State;
  gStatus.dwWin32ExitCode = ExitCode;
  gStatus.dwWaitHint = Wait;

  if (State == SERVICE_START_PENDING)
    gStatus.dwControlsAccepted = 0;
  else
    gStatus.dwControlsAccepted = SERVICE_ACCEPT_STOP;

  SetServiceStatus(gStatusHandle, &gStatus);
}

void WINAPI CtrlHandler( DWORD CtrlCmd ) {
  switch (CtrlCmd) {
    case SERVICE_CONTROL_STOP:
      MySetServiceStatus(SERVICE_STOP_PENDING, NO_ERROR, 0);
      // Add here the necessary code to stop the daemon
      SetEvent(ghStopEvent);
      break;

    case SERVICE_CONTROL_INTERROGATE:
      // Add here the necessary code to query the daemon
      break;
  }

  MySetServiceStatus(gStatus.dwCurrentState, NO_ERROR, 0);
}

int Run( char * Command ) {
  STARTUPINFO si;
  PROCESS_INFORMATION pi;

  si.cb = sizeof(STARTUPINFO);
  si.lpReserved = NULL;
  si.lpDesktop = NULL;
  si.lpTitle = 0;
  si.dwX = si.dwY = si.dwXSize = si.dwYSize =
  si.dwXCountChars = si.dwYCountChars = si.dwFlags = 0;
  si.wShowWindow = SW_NORMAL;
  si.lpReserved2 = NULL;
  si.cbReserved2 = 0;
  si.hStdInput = si.hStdOutput = si.hStdError = 0;

  return CreateProcess(0, Command, 0, 0, 1, 0, 0, 0, &si, & pi);
}

void InitService() {
  // printf in this function will not work when running from SCM

  gStatusHandle = RegisterServiceCtrlHandler(NAME_IN_SERVICES, CtrlHandler);
  if (! gStatusHandle) {
    int e;

    e = GetLastError();
    if (e == ERROR_INVALID_NAME)
      printf("RegisterServiceCtrlHandler failed (ERROR_INVALID_NAME)\n");
    else if (e == ERROR_SERVICE_DOES_NOT_EXIST)
      printf("RegisterServiceCtrlHandler failed (ERROR_SERVICE_DOES_NOT_EXIST)\n");
    else
      printf("RegisterServiceCtrlHandler failed (%d)\n", (int) e);

    return;
  }

  gStatus.dwServiceType = SERVICE_WIN32;
  gStatus.dwServiceSpecificExitCode = 0;
  MySetServiceStatus( SERVICE_START_PENDING, NO_ERROR, 3000 );

  // HERE put your daemon initialization code
  // if it takes too long to start, call MySetServiceStatus() with
  // SERVICE_START_PENDING periodically.
  // If initialization fails, call MySetServiceStatus with SERVICE_STOPPED.

  // The following is a generic code. Replace with your own.
  Run(DAEMON_EXE_NAME);
  // end of daemon initialization

  MySetServiceStatus(SERVICE_RUNNING, NO_ERROR, 0);
  ghStopEvent = CreateEvent(NULL, TRUE, FALSE, NULL);
  if (ghStopEvent == NULL) {
    MySetServiceStatus( SERVICE_STOPPED, NO_ERROR, 0 );
    printf("CreateEvent failed.\n");
    return;
  }

  WaitForSingleObject(ghStopEvent, INFINITE);
  MySetServiceStatus(SERVICE_STOPPED, NO_ERROR, 0);
}

SERVICE_TABLE_ENTRY DispatchTable[] = {
  { NAME_IN_SERVICES, (LPSERVICE_MAIN_FUNCTION) InitService },
  { NULL, NULL }
};

int main( int c, char * arg[] ) {
  if (c > 2) {
    printf("Usage: servicio [ install | uninstall ]\n");
    return 1;
  }

  if (c == 2 && ! stricmp(arg[1], "install")) {
    InstallService();
    return 0;
  }

  if (c == 2 && ! stricmp(arg[1], "uninstall")) {
    UninstallService();
    return 0;
  }

  if (! StartServiceCtrlDispatcher(DispatchTable))
    printf("StartServiceCtrlDispatcher failed\n");

  return 0;
}