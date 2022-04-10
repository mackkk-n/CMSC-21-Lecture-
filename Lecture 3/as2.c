#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*for some reason, this code has encountered problems when using int inputs.
    As a solution, the programmer compromised and treated inputs as characters instead.
    Also, connsidering the scope of functions that can be used in this code, the proragmmer
    assumed that the input will be logically accepted.*/

    char dig_1, dig_2; //declaring data type for broken-down inpputs
    printf("Enter a two-digit number: "); //printing instructions
    scanf("%c%c", &dig_1, &dig_2); //user input

    printf("Number entered in words: "); //printing results in the terminal


    //selection statement for the tenths place digit

    /*prints the first word of the two-digit number on the terminal,
    then applies break to each case to navigate a=output logically*/
    switch (dig_1)
        {
        case '1' :
            /*special conditions for digits with 1 on the tenths place
            different printed outputs for each condition*/
            if (dig_2 == '0')
                printf("Ten.");
            else if (dig_2 == '1')
                printf("Eleven.");
            else if (dig_2 == '2' )
                printf("Twelve.");
            else if (dig_2 == '3')
                printf("Thirteen.");
            else if (dig_2 == '4')
                printf("Fourteen.");
            else if (dig_2 == '5')
                printf("Fifteen.");
            else if (dig_2 == '6')
                printf("Sixteen.");
            else if (dig_2 == '7')
                printf("Seventeen.");
            else if (dig_2 == '8')
                printf("Eighteen.");
            else if (dig_2 == '9')
                printf("Nineteen.");
            break; //break included for the terinal outputs not to overlap, though conditions are not met

        //prints the first word in the tenths place
        case '2' : printf("Twenty"); break;

        case '3' : printf("Thirty"); break;

        case '4' : printf("Fourty"); break;

        case '5' : printf("Fifty"); break;

        case '6' : printf("Sixty"); break;

        case '7' : printf("Seventy"); break;

        case '8' : printf("Eighty"); break;

        case '9' : printf("Ninety"); break;

        default : printf("Invalid input!"); break;
        }

    //printing the corresponding word for the number in the ones place

    //if number has 1 in the tenths place, program no longer prints the second word.
    if (dig_1 == '1')
        printf("");

    else if (("%c", dig_1) == "Invalid input!")
        printf(" ");

    //printing the second word in the ones place.
    else
        switch (dig_2)
        {
            case '0' : printf(" "); break;

            case '1' : printf("-one"); break;

            case '2' : printf("-two"); break;

            case '3' : printf("-three"); break;

            case '4' : printf("-four"); break;

            case '5' : printf("-five"); break;

            case '6' : printf("-six"); break;

            case '7' : printf("-seven"); break;

            case '8' : printf("-eight"); break;

            case '9' : printf("-nine"); break;

            default : printf(" Invalid input!"); break;
        }

    return 0; //returns integer at the end of the function.

}
