#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *= 2;
    }

    return 0;
}
