#include <stdio.h>
/* defines value of row and columns */
#define row 8
#define column 8

int main()
{
    printf ("              A           B           [C]         [D]         E           F           G           H");

    /*initializing element values in array adj_networks;
    notice that ([i] = element) == ([i]element) */
    int adj_networks [row][column] = {
        {[0]1, [1]1, [5]1},
        {[0]1, [1]2, [2]1},
        {[1]1, [2]1, [4]1, [5]1},
        {[3]1, [4]1},
        {[3]1, [4]1},
        {[0]1, [2]1, [5]1},
        {[0]1, [3]1, [6]1},
        {[5]1, [7]1}
    };

    //creating an array for horizontal node values (A-H) corresponded with (0-7)
    char node_station [8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};

    /* main loop - prints the elements in the vertical node stations from array node_station*/
    for (int node = 0; node < column; node++){
        if (node == 2 || node == 3){ // indicates charging stations
            printf("    \n[%c]", node_station[node]);
        }else{
            printf("    \n  %c", node_station[node]);
        }

        /* prints the respective elements from the multi-dimensional (adj_networks) array */
        for (int node_val = 0; node_val < row; node_val++){
            printf("           %d", adj_networks[node][node_val]);
        }
    }

    int point; // declares data type for variable point -


    /* user input - determines which point the user is currently at */
    printf("\n\nWhich point are you located?\n0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H\n");
    printf("\nAT POINT: ");
    scanf("%d", &point);


    /* prints responses on the terminal, indicating the nearest
    charging station, or if the user is already in one */

    if (point < 0 || point > 7){ // valid inputs are between -1 and 8 only
        printf("\nInvalid input!");
    }else if (point == 2){ // first charging station (C)
        printf("C is a charging station");
    }else if (point == 3){ // second charging station (D)
        printf("D is a charging station");
    }else{ // assesses which charging station the user is nearest to
        if (point == 0 || 1 || 5 || 7){ //
            printf("\nC arrived to charging station");
        }else if (point == 4 || 6){
            printf("\nD arrived to charging station");
        }
    }

    return 0;
}
