#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: A pointer to the first element of the square matrix.
 * @size: The size of the square matrix.
 *
 * This function calculates and prints the sums of both diagonals.
 */
void print_diagsums(int *a, int size)
{
int sum1 = 0;  /* Sum for the primary diagonal */
int sum2 = 0;  /* Sum for the secondary diagonal */
int i;
for (i = 0; i < size; i++)
{
sum1 += *(a + (i * size + i));       /* Primary diagonal */
sum2 += *(a + (i * size + (size - 1 - i))); /* Secondary diagonal */
}
printf("%d, %d\n", sum1, sum2);  /* Print the sums */
}
