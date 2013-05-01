#include <windows.h>

#include "virtualbox/virtualbox.h"

int main(int argc, char **argv)
{
    int ret;

    srand(time(NULL));

    fake_virtualbox();
    return 0;
}
