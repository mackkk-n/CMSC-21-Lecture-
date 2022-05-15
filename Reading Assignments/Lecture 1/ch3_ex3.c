#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;   // sets the data type for the following variables

    printf ( "Enter first fraction: "); // prints instruction
    scanf ("%d/%d" , &num1, &denom1); // asks for user input - numerator and denominator separated by '/'

    // does the same process as above, acquires specific int value for the numerator and denominator
    printf ("Enter second fraction: " );
    scanf ("%d/%d" , &num2, &denom2);

    // computes for the values of numerator and denominator respectively
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    printf ("The sum is %d/%d\n", result_num, result_denom); // prints the result in a string

    return 0;

}
