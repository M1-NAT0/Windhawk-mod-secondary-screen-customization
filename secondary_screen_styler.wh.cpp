// ==WindhawkMod==
// @id              secondary-screen-customization
// @name            Secondary Screen Customization
// @description     Customize and enhance multi-monitor desktop experiences on Windows 11
// @version         1.0.0
// @author          M1NAT0, Ali Ozdas
// @github          https://github.com/M1-NAT0/Windhawk-mod-secondary-screen-customization
// @include         explorer.exe
// @architecture    x86-64
// ==/WindhawkMod==

#include <windows.h>
#include <windhawk_api.h>

// Monitor enumeration callback
BOOL CALLBACK MonitorEnumProc(HMONITOR hMonitor, HDC hdcMonitor, LPRECT lprcMonitor, LPARAM dwData) {
    MONITORINFOEX mi;
    mi.cbSize = sizeof(mi);
    if (GetMonitorInfo(hMonitor, &mi)) {
        if (!(mi.dwFlags & MONITORINFOF_PRIMARY)) {
            // Secondary monitor detected
            Wh_Log(L"Secondary display enumerated: %s", mi.szDevice);
        }
    }
    return TRUE;
}

// Mod Initialization
BOOL Wh_ModInit() {
    Wh_Log(L"Secondary Screen Customization Mod initialized");
    EnumDisplayMonitors(NULL, NULL, MonitorEnumProc, 0);
    return TRUE;
}

// Mod Uninitialization
void Wh_ModUninit() {
    Wh_Log(L"Secondary Screen Customization Mod uninitialized");
}