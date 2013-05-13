#include <windows.h>
#include <time.h>

#include "virtualbox/virtualbox.h"
#include "vmware/vmware.h"
#include "debugger/debugger.h"

int main(int argc, char **argv)
{
    srand(time(NULL));
    fake_virtualbox();
    fake_vmware();
    fake_debugger();
    return 0;
}
