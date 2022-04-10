#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*this code does not have any outputs, only shows how
    the following conditional statment can be simplified:

    if (age >= 13)
        if (age<=19)
            teenager = true;
        else
            teenager = false;
    else if (age<13)
        teenager = false;   */

    //siplified code:

    if (13<=age<=19)
        teenager = true;
    else
        teenager = false;

    return 0;

}
