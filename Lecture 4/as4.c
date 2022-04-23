#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaring data types and value
    int exponent;
    int n = 1;
    int power = 0;
    printf("Enter exponent value: "); //prints instructions
    scanf("%d", &exponent); //user input, indicating the nth term of the exponent
    printf("\n    TABLE OF POWERS OF TWO\n");
    printf("     n          2 to the n\n");

    //for loop designed to calculate the value of 2 raise to n up to the nth term
    for (int i = 0; i<=exponent; i++){ // declares initial value of i, condition to satisfy, and increment value
        printf("     %d               %d\n", i, n); //prrinting the results
        n*=2; //incrementing value of n
    }

    return 0;

}
