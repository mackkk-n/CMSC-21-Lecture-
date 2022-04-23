#include <stdio.h>
#include <math.h>

int main()
{
    //declaring data type and initializing values on some variables
    int x;
    double b, c;
    double d = 1;
    double tol = 0.00001;
    double y = 1;

    //user input
    printf("Enter value of x: ");
    scanf("%d", &x);

    //printing label for each row
    printf("x              y                x/y          1/2(y + x/y)");

    //main loop, prints results until difference of y(n) - y <= tolerance value
    while (fabs(d)>= tol){
        //calculating values
        b = x/y;
        c = 0.5*(y+b);

        //printing results
        printf("\n%d          %lf          %lf          %lf", x, y, b, c);

        //storing new values for d and y
        d = (c-y);
        y = c;
    }
    return 0;
}
