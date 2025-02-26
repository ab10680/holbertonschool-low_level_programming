#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers,
 * followed by a new line.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to print.
 *
 * The numbers are separated by a comma and a space.
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]); /* Print the current element */
if (i < n - 1) /* Check if it's not the last element */
{
printf(", "); /* Print the comma and space */
}
}
printf("\n"); /* Print a new line at the end */
}
