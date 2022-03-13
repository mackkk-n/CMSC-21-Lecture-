#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first, second, third; //declares the data type of each number - set to int

    printf("Please enter a 3-digit number: "); //prints the instruction

    /*asks for user input: stores first digit as varible first's value,
    second as variable second's valiue, and third as third's value*/
    scanf("%1d%1d%1d", &first, &second, &third);

    printf("reverse: %1d%1d%1d", third, second, first); //prints the results in reverse
    return 0;
}
