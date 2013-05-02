#include <windows.h>
#include <stdio.h>

int main(int argc, char **argv) {

    int r = GetSystemMetrics(SM_CMOUSEBUTTONS);
    printf("Mousebuttons: %d\n", r);
    r = GetSystemMetrics(SM_MOUSEWHEELPRESENT);
    printf("Mousewheel present: %d\n", r);
    r = GetSystemMetrics(SM_CMONITORS);
    printf("monitors: %d\n", r);

    return 0;
}
