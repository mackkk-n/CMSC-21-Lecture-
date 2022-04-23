#include <stdio.h>
#include <stdlib.h>

int main()
{
    //use input for number of days in a month and the day of the week to start with

    int n, day, i; //declaring data type for variables in use input
    printf("Enter number of days in month: ");
    scanf("%d", &n);
    printf("Enter the starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &day);

    printf("\n"); //puts a space between instructions and output

    i = 1; //declaring intial value of i.

    /*program will only print output if
    condition of valid number of days is met*/

    //If the following conditions below are met, an error message will be printetd in the terminal
    if (((28> n ) || (n >31)) || ((0>day) || (day>7))){ //utilization of logical operators should be appropriate
        if (((28>n) || (n>31)) && ((0<day) && (7>day)))
          printf("Invalid number of days in a month!"); //prints error message for valid days of the week but an invalid number of days in a month
        else if ((28<n<31) && ((0>day) || (7>day)))
          printf("Invalid day of the week!"); //prints error message for valid number of days in a month but an invalid day of the week
        else
          printf("Invalid number of days and day of the week!"); //prints error message if both number of days in a month and day of the week are invalid
    }

    else{ //conditional nest for valid inputs

        /*breaks applied to avoid unnecessary printed oututs in the terminal;
        values incremented with +1 at the end of the loop: will function until
        the program exits the loop;

        creates a while loop to indicate when will be the number printed down,
        utilizing mod with respect to value 14 as reference value;

        cases 1-7 correspond Sunday-Monday respectively*/

       switch (day){
            case 1 :
                while (i<=n){
                    if ((i-1)%7 != 0)
                      printf("%d     ", i);
                    else
                      printf("\n%d    ", i);
                    i += 1; //increments the value with +1
                }
                break;

            case 2 :
                printf("     ");
                while (i<=n){
                    if ((i%7 != 0))
                      printf("%d     ", i);
                    else
                      printf("\n%d    ", i);
                    i += 1;
                }
                break;

            case 3 :
                printf("           ");
                while (i<=n){
                    if (((i+1)%7 != 0))
                      printf("%d     ", i);
                    else
                      printf("\n%d    ", i);
                    i += 1;
                }
                break;

            case 4 :
                printf("                 ");
                while (i<=n){
                    if (((i+2)%7 != 0))
                      printf("%d     ", i);
                    else
                      printf("\n%d    ", i);
                    i += 1;
                }
                break;

            case 5 :
                printf("                       ");
                while (i<=n){
                    if (((i+3)%7 != 0))
                      printf("%d     ", i);
                    else
                      printf("\n%d    ", i);
                    i += 1;
                }
                break;

            case 6 :
                printf("                             ");
                while (i<=n){
                    if (((i+4)%7 != 0))
                      printf("%d     ", i);
                    else
                      printf("\n%d    ", i);
                    i += 1;
                }
                break;

            case 7 :
                printf("                                   ");
                while (i<=n){
                    if (((i+5)%7 != 0))
                      printf("%d     ", i);
                    else
                      printf("\n%d    ", i);
                    i += 1;
                }
                break;

            default :
                printf("Invalid Inputs!");
                break;
       }

    }

    return 0;

}
