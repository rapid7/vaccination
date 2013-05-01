#include <windows.h>
#include <time.h>

#include "virtualbox/virtualbox.h"

int main(int argc, char **argv)
{
    srand(time(NULL));
    fake_virtualbox();
    return 0;
}
