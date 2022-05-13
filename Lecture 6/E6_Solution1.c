/* Example 6.1 Solution*/

#include <stdio.h>

int main(void){

    int b[15] = {[2] = 29, [9] = 7, [4] = 48}, i;

    for (i = 0; i < 15; i++){
        printf("b[%d] = %d \n", i, b[i]);
    }

    return 0;
}
