#include <cs50.h>
#include <stdio.h>



/**
 * Initializes the game's board with tiles numbered 1 through d*d - 1
 * (i.e., fills 2D array with values but does not actually print them).
 */
void init(void)
{
    int board [3][3];
    board [0][0] = 8;
    board [0][1] = 7;
    board [0][2] = 6;
    board [1][0] = 5;
    board [1][1] = 4;
    board [1][2] = 3;
    board [2][0] = 2;
    board [2][1] = 1;
    board [2][2] = 0;
    printf("%i", board[][]);
}