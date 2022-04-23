#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i;
    printf("Enter value: ");
    scanf("%d", &i);

    /*c. do-while loop - regardless if the condition is met (i<10),
    the value of the user input will be printed at least once.*/
    do {printf("\nValue of i is %d", i);
    }while (i<10);

    return 0;

}
