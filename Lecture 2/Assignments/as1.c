#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first, second; //declares the data type of each number - set to int

    printf("Please enter a 2-digit number: "); //prints the instruction
    scanf("%1d%1d", &first, &second); //asks for user input, stores first digit as varible first's value, second as variable second's valiue

    printf("reverse: %1d%1d", second, first); //prints the results in reverse
    return 0;
}
