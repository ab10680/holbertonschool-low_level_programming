#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints the chessboard.
 * @a: A pointer to an 8x8 array representing the chessboard.
 *
 * This function prints each row of the chessboard on a new line.
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)  /* Loop through rows */
{
for (j = 0; j < 8; j++)  /* Loop through columns */
{
putchar(a[i][j]);  /* Print each piece */
}
putchar('\n');  /* New line after each row */
}
}
