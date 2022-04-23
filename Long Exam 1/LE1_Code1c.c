#include <stdio.h>

int main()
{
    //declaring data type and intializing values
    int a = 2;
    int b = 3;

    //arranging conditional nestings and print statements
    if (a == 2){
        printf("*****\n");
        if (b == 3){
             printf("<<<<<\n");
        }else{
            printf(">>>>>\n");
            printf("----");
        }
    }
}
