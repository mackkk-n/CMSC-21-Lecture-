/* Finds the negative numbers in an array - Example 5 Solution*/

#include <stdio.h>

int main(){

    int N, i;

    printf("Enter N: ");
    scanf("%d", &N);

    int a[N];

    for (i = 0; i < N; i++){
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    for (i = 0; i < N; i++){
        if (a[i] < 0){
            printf("a[%d] = %d is a negative number. \n", i, a[i]);
        }
    }

    return 0;
}
