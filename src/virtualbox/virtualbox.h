#include "../shipped.h"
#include "../registry.h"
#include "../process.h"
#include "../utils.h"

void fake_virtualbox() {
    int ret;
    DWORD value;

    ret = copy_dll_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\DIFxAPI.dll"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\DIFxAPI.dll\n", ret);

    ret = copy_random_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\iexplore.ico"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\iexplore.ico\n", ret);

    ret = copy_random_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\install_drivers.log"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\install_drivers.log\n", ret);

    ret = copy_random_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\Oracle VM VirtualBox Guest Additions.url"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\Oracle VM VirtualBox Guest Additions.url\n", ret);

    ret = copy_exe_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\uninst.exe"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\uninst.exe\n", ret);

    ret = copy_exe_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxControl.exe"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\VBoxControl.exe\n", ret);

    ret = copy_dll_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxDisp.dll"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\VBoxDisp.dll\n", ret);

    ret = copy_exe_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxDrvInst.exe"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\VBoxDrvInst.exe\n", ret);

    ret = copy_random_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxGuest.cat"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\VBoxGuest.cat\n", ret);

    ret = copy_random_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxGuest.inf"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\VBoxGuest.inf\n", ret);

    ret = copy_random_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxGuest.sys"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\VBoxGuest.sys\n", ret);

    ret = copy_random_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxMouse.cat"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\VBoxMouse.cat\n", ret);

    ret = copy_random_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxMouse.inf"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\VBoxMouse.inf\n", ret);

    ret = copy_random_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxMouse.sys"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\VBoxMouse.sys\n", ret);

    ret = copy_exe_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxTray.exe"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\VBoxTray.exe\n", ret);

    ret = copy_random_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxVideo.cat"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\VBoxVideo.cat\n", ret);

    ret = copy_random_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxVideo.inf"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\VBoxVideo.inf\n", ret);

    ret = copy_random_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxVideo.sys"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\VBoxVideo.sys\n", ret);

    ret = copy_exe_to(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxWHQLFake.exe"));
    printf("ret: %d from creating C:\\Program Files\\Oracle\\VirtualBox Guest Additions\\VBoxWHQLFake.exe\n", ret);

    ret = copy_random_to(system_path("\\system32\\drivers\\VBoxGuest.sys"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\drivers\\VBoxGuest.sys\n", ret);

    ret = copy_random_to(system_path("\\system32\\drivers\\VBoxMouse.sys"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\drivers\\VBoxMouse.sys\n", ret);

    ret = copy_random_to(system_path("\\system32\\drivers\\VBoxSF.sys"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\drivers\\VBoxSF.sys\n", ret);

    ret = copy_random_to(system_path("\\system32\\drivers\\VBoxVideo.sys"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\drivers\\VBoxVideo.sys\n", ret);

    ret = copy_exe_to(system_path("\\system32\\VBoxControl.exe"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\VBoxControl.exe\n", ret);

    ret = copy_dll_to(system_path("\\system32\\VBoxDisp.dll"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\VBoxDisp.dll\n", ret);

    ret = copy_dll_to(system_path("\\system32\\VBoxHook.dll"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\VBoxHook.dll\n", ret);

    ret = copy_dll_to(system_path("\\system32\\VBoxMRXNP.dll"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\VBoxMRXNP.dll\n", ret);

    ret = copy_dll_to(system_path("\\system32\\VBoxOGL.dll"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\VBoxOGL.dll\n", ret);

    ret = copy_dll_to(system_path("\\system32\\VBoxOGLarrayspu.dll"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\VBoxOGLarrayspu.dll\n", ret);

    ret = copy_dll_to(system_path("\\system32\\VBoxOGLcrutil.dll"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\VBoxOGLcrutil.dll\n", ret);

    ret = copy_dll_to(system_path("\\system32\\VBoxOGLerrorspu.dll"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\VBoxOGLerrorspu.dll\n", ret);

    ret = copy_dll_to(system_path("\\system32\\VBoxOGLfeedbackspu.dll"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\VBoxOGLfeedbackspu.dll\n", ret);

    ret = copy_dll_to(system_path("\\system32\\VBoxOGLpackspu.dll"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\VBoxOGLpackspu.dll\n", ret);

    ret = copy_dll_to(system_path("\\system32\\VBoxOGLpassthroughspu.dll"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\VBoxOGLpassthroughspu.dll\n", ret);

    ret = copy_exe_to(system_path("\\system32\\VBoxService.exe"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\VBoxService.exe\n", ret);

    ret = copy_exe_to(system_path("\\system32\\VBoxTray.exe"));
    printf("ret: %d from creating C:\\WINDOWS\\system32\\VBoxTray.exe\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", "VBoxTray", system_path("\\system32\\VBoxTray.exe"), 38, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Oracle VM VirtualBox Guest Additions", "DisplayName", "Oracle VM VirtualBox Guest Additions 4.2.10", 44, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Oracle VM VirtualBox Guest Additions\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Oracle VM VirtualBox Guest Additions", "UninstallString", progfiles_path("\\Oracle\\VirtualBox Guest Additions\\uninst.exe"), 65, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Oracle VM VirtualBox Guest Additions\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Oracle VM VirtualBox Guest Additions", "DisplayVersion", "4.2.10.0", 9, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Oracle VM VirtualBox Guest Additions\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Oracle VM VirtualBox Guest Additions", "URLInfoAbout", "http://www.virtualbox.org", 26, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Oracle VM VirtualBox Guest Additions\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Oracle VM VirtualBox Guest Additions", "Publisher", "Oracle Corporation", 19, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall\\Oracle VM VirtualBox Guest Additions\n", ret);

    value = 0x00000002;
    ret = registry_add(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\OpenGLDrivers\\VBoxOGL", "Version", (void *) &value, 4, REG_DWORD);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\OpenGLDrivers\\VBoxOGL\n", ret);

    value = 0x00000001;
    ret = registry_add(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\OpenGLDrivers\\VBoxOGL", "DriverVersion", (void *) &value, 4, REG_DWORD);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\OpenGLDrivers\\VBoxOGL\n", ret);

    value = 0x00000001;
    ret = registry_add(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\OpenGLDrivers\\VBoxOGL", "Flags", (void *) &value, 4, REG_DWORD);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\OpenGLDrivers\\VBoxOGL\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\OpenGLDrivers\\VBoxOGL", "Dll", "VBoxOGL.dll", 12, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\OpenGLDrivers\\VBoxOGL\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SOFTWARE\\Oracle\\Sun Ray\\ClientInfoAgent\\DisconnectActions", "", "", 1, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SOFTWARE\\Oracle\\Sun Ray\\ClientInfoAgent\\DisconnectActions\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SOFTWARE\\Oracle\\Sun Ray\\ClientInfoAgent\\ReconnectActions", "", "", 1, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SOFTWARE\\Oracle\\Sun Ray\\ClientInfoAgent\\ReconnectActions\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SOFTWARE\\Oracle\\VirtualBox Guest Additions", "Version", "4.2.10", 7, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SOFTWARE\\Oracle\\VirtualBox Guest Additions\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SOFTWARE\\Oracle\\VirtualBox Guest Additions", "VersionExt", "4.2.10", 7, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SOFTWARE\\Oracle\\VirtualBox Guest Additions\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SOFTWARE\\Oracle\\VirtualBox Guest Additions", "Revision", "84104", 6, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SOFTWARE\\Oracle\\VirtualBox Guest Additions\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SOFTWARE\\Oracle\\VirtualBox Guest Additions", "InstallDir", progfiles_path("\\Oracle\\VirtualBox Guest Additions"), 53, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SOFTWARE\\Oracle\\VirtualBox Guest Additions\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000", "InfPath", "oem1.inf", 9, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000", "InfSection", "VBoxVideo", 10, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000", "ProviderName", "Oracle Corporation", 19, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000", "DriverDateData", "\x00\x40\x32\x61\x34\x19\xce\x01", 8, REG_BINARY);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000", "DriverDate", "3-5-2013", 9, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000", "DriverVersion", "4.2.10.0", 9, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000", "MatchingDeviceId", "pci\\ven_80ee&dev_beef", 23, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000", "DriverDesc", "VirtualBox Graphics Adapter", 28, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    value = 0x00000000;
    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\\Settings", "Acceleration.Level", (void *) &value, 4, REG_DWORD);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\\Settings\n", ret);

    value = 0x00000000;
    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\\Settings", "VgaCompatible", (void *) &value, 4, REG_DWORD);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\\Settings\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\\Settings", "Device Description", "VirtualBox Graphics Adapter", 28, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\\Settings\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000", "InfPath", "monitor.inf", 12, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000", "InfSection", "Unknown.Install", 16, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000", "ProviderName", "Microsoft", 10, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000", "DriverDateData", "\x00\xc0\x0e\xa1\x1b\xee\xc0\x01", 8, REG_BINARY);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000", "DriverDate", "6-6-2001", 9, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000", "DriverVersion", "5.1.2001.0", 11, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000", "MatchingDeviceId", "monitor\\default_monitor", 25, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000", "DriverDesc", "Default Monitor", 16, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\\MODES\\640,480", "", "", 1, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\\MODES\\640,480\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019", "InfPath", "oem0.inf", 9, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019", "InfSection", "VBoxGuest_Install", 18, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019", "ProviderName", "Oracle Corporation", 19, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019", "DriverDateData", "\x00\x40\x32\x61\x34\x19\xce\x01", 8, REG_BINARY);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019", "DriverDate", "3-5-2013", 9, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019", "DriverVersion", "4.2.10.0", 9, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019", "MatchingDeviceId", "pci\\ven_80ee&dev_cafe", 23, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019", "DriverDesc", "VirtualBox Device", 18, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\CriticalDeviceDatabase\\pci#ven_80ee&dev_cafe", "Service", "VBoxGuest", 10, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\CriticalDeviceDatabase\\pci#ven_80ee&dev_cafe\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\CriticalDeviceDatabase\\pci#ven_80ee&dev_cafe", "ClassGUID", "{4D36E97D-E325-11CE-BFC1-08002BE10318}", 39, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\CriticalDeviceDatabase\\pci#ven_80ee&dev_cafe\n", ret);

    value = 0x00000000;
    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\0000", "Acceleration.Level", (void *) &value, 4, REG_DWORD);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\0000\n", ret);

    value = 0x00000000;
    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\0000", "VgaCompatible", (void *) &value, 4, REG_DWORD);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\0000", "Device Description", "VirtualBox Graphics Adapter", 28, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\0000\\VolatileSettings", "{5b45201d-f2f2-4f3b-85bb-30ff1f953599}", "\\??\\PCI#VEN_80EE&DEV_BEEF&SUBSYS_00000000&REV_00#3&267a616a&0&10#{5b45201d-f2f2-4f3b-85bb-30ff1f953599}", 108, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\0000\\VolatileSettings\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\ControlSet001\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\Video", "Service", "VBoxVideo", 10, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\ControlSet001\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\Video\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000", "InfPath", "oem1.inf", 9, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000", "InfSection", "VBoxVideo", 10, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000", "ProviderName", "Oracle Corporation", 19, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000", "DriverDateData", "\x00\x40\x32\x61\x34\x19\xce\x01", 8, REG_BINARY);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000", "DriverDate", "3-5-2013", 9, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000", "DriverVersion", "4.2.10.0", 9, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000", "MatchingDeviceId", "pci\\ven_80ee&dev_beef", 23, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000", "DriverDesc", "VirtualBox Graphics Adapter", 28, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    value = 0x00000000;
    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\\Settings", "Acceleration.Level", (void *) &value, 4, REG_DWORD);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\\Settings\n", ret);

    value = 0x00000000;
    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\\Settings", "VgaCompatible", (void *) &value, 4, REG_DWORD);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\\Settings\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\\Settings", "Device Description", "VirtualBox Graphics Adapter", 28, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E968-E325-11CE-BFC1-08002BE10318}\\0000\\Settings\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000", "InfPath", "monitor.inf", 12, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000", "InfSection", "Unknown.Install", 16, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000", "ProviderName", "Microsoft", 10, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000", "DriverDateData", "\x00\xc0\x0e\xa1\x1b\xee\xc0\x01", 8, REG_BINARY);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000", "DriverDate", "6-6-2001", 9, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000", "DriverVersion", "5.1.2001.0", 11, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000", "MatchingDeviceId", "monitor\\default_monitor", 25, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000", "DriverDesc", "Default Monitor", 16, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\\MODES\\640,480", "", "", 1, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E96E-E325-11CE-BFC1-08002BE10318}\\0000\\MODES\\640,480\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019", "InfPath", "oem0.inf", 9, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019", "InfSection", "VBoxGuest_Install", 18, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019", "ProviderName", "Oracle Corporation", 19, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019", "DriverDateData", "\x00\x40\x32\x61\x34\x19\xce\x01", 8, REG_BINARY);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019", "DriverDate", "3-5-2013", 9, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019", "DriverVersion", "4.2.10.0", 9, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019", "MatchingDeviceId", "pci\\ven_80ee&dev_cafe", 23, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019", "DriverDesc", "VirtualBox Device", 18, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Class\\{4D36E97D-E325-11CE-BFC1-08002BE10318}\\0019\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\CriticalDeviceDatabase\\pci#ven_80ee&dev_cafe", "Service", "VBoxGuest", 10, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\CriticalDeviceDatabase\\pci#ven_80ee&dev_cafe\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\CriticalDeviceDatabase\\pci#ven_80ee&dev_cafe", "ClassGUID", "{4D36E97D-E325-11CE-BFC1-08002BE10318}", 39, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\CriticalDeviceDatabase\\pci#ven_80ee&dev_cafe\n", ret);

    value = 0x00000000;
    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\0000", "Acceleration.Level", (void *) &value, 4, REG_DWORD);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\0000\n", ret);

    value = 0x00000000;
    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\0000", "VgaCompatible", (void *) &value, 4, REG_DWORD);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\0000", "Device Description", "VirtualBox Graphics Adapter", 28, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\0000\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\0000\\VolatileSettings", "{5b45201d-f2f2-4f3b-85bb-30ff1f953599}", "\\??\\PCI#VEN_80EE&DEV_BEEF&SUBSYS_00000000&REV_00#3&267a616a&0&10#{5b45201d-f2f2-4f3b-85bb-30ff1f953599}", 108, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\0000\\VolatileSettings\n", ret);

    ret = registry_add(HKEY_LOCAL_MACHINE, "SYSTEM\\CurrentControlSet\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\Video", "Service", "VBoxVideo", 10, REG_SZ);
    printf("ret: %d from registry value HKEY_LOCAL_MACHINE/SYSTEM\\CurrentControlSet\\Control\\Video\\{B59C4D72-1E57-4403-AAC2-C52C73A83805}\\Video\n", ret);

    BOOL ret2 = IsProcessRunning(L"VBoxTray.exe");
    if (!ret2) {
        ret2 = StartProcess(progfiles_path("\\Oracle\\VirtualBox Guest Additions\\VBoxTray.exe"));
    }
}
