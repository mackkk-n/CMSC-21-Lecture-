#include <stdio.h>
#include <math.h>

struct line{
    struct point{
    //defining x and y coordinates
        float x;
        float y;
    }point1, point2;
    float midpoint[2]; //modified using arrays instead of pointers
    float slope;    // defining variable slope
    float distance;  // defininng variable distance
}line1;

/*getSlope function body - calculates for the slope*/
float getSlope (struct line line1)
{
    /*In reference to the formula:

    m = (y2 - y1) / (x2 - x1)

    */

    line1.slope = (line1.point2.y - line1.point1.y)/(line1.point2.x - line1.point1.x);
    return line1.slope;
}

/*getMidpoint function body - calculates for the Midpoint*/
float getMidpoint (struct line line1)
{
    /* was navigated through an array as declared in the beginning ; in reference to the formula:

    xmidpoint = (x1 + x2) / 2
    ymidpoint = (y1 + y2) / 2

    */

    line1.midpoint[0] = (line1.point2.x + line1.point1.x)/2; // x coordinates
    line1.midpoint[1] = (line1.point2.y + line1.point1.y)/2; // y coordinates
    printf("Midpoint of the line is : (%g,%g)\n",line1.midpoint[0],line1.midpoint[1]); // prints result on the terminal
}

/*getDistance function body - calculates for the distance between the coordinates*/
float getDistance (struct line line1)
{
    /* Uses built-in library math.h to use square root function; in referent to the formula:

    d = √[(x1 - x2)^2 + (y1 - y2)^2]

     */

    line1.distance = sqrt(pow((line1.point1.x - line1.point2.x), 2) + pow((line1.point1.y - line1.point2.y), 2));
    printf("Distance between the points is : %g\n", line1.distance); // prints the result on the terminal
}

/* Function for Slope Intercept Form */
void getSlopeIntercept (struct line line1)
{
    /* Defining b on the linear equation:

    y = mx + b

    */

    float b;

    // y = mx + b  == b = y - mx


    b = line1.point2.y - (line1.slope*line1.point2.x);
    printf ("Slope-intercept form is : y=%gx+%g\n", getSlope(line1), b);
}

int main(){
// User input
    printf("Enter x and y values respectively for point 1: ");
    scanf("%f&f",&line1.point1.x, &line1.point1.y);
    printf("Enter x and y values respectively for point 2: ");
    scanf("%f%f",&line1.point2.x, &line1.point2.y);

// printing the final output on the terminal
    printf ("Slope is : %g\n", getSlope(line1));
    getMidpoint(line1);
    getDistance(line1);
    getSlopeIntercept(line1);
}
