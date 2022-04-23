#include <stdio.h>

int main(){
    //declaring data type and intializing values
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';


    /*Heads up: some parts of the code were modified, specifically in printing the result.
    0 is now included in the iteration of loop, thus size range will be converted from size to size+1*/

    //main loop - while user wants to try more numbers, terminal will allow him to
    while(cont = 'y'){
        printf("Enter square size: ");
        scanf("%d", &size); //stores new size value

        /*navigating * print outs on the terminal,
        indicates conditions, */
        for( row = 0 ;row <= size ; row++){
            for(column = 0 ; column <= size ;column++){
                    //specifying conditions where * should be printed
                if (row == 0 || row == size || column == 0 || column == size){
                    printf("*");
                }
            //if none of the conditions are met, empty space should be printed instead
                else{
                    printf(" ");
                }
            }
        printf("\n"); //puts a space between layers of printed outputs
        }

        //stores new data value for variable cont, basis of main (while) loop to continue
        printf("Print another square? Enter y or n: ");
        scanf("%c", &cont);

        //if user no longer wants to continue, program ends
        if (cont == 'n'){
            printf("END");
            break;
        }
        //if none of the choices are selected, prints invalid output response.
        else if (cont != 'y' || cont != 'n'){
            printf("Not a valid choice.\n");

            printf("Print another square? Enter y: ");
            scanf("%c", &cont);

        }
    }
    return 0;
}
