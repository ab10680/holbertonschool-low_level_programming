#include <unistd.h>
#include "main.h"

/**
 * print_triangle - prints a triangle using '#' characters
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
int i; /* Declare the outer loop variable */
int j; /* Declare the inner loop variable */
if (size <= 0)
{
_putchar('\n'); /* Print newline if size is 0 or less */
return;
}
for (i = 1; i <= size; i++) /* Loop for each row */
{
/* Print spaces */
for (j = size - i; j > 0; j--)
{
_putchar(' '); /* Print space to align the triangle */
}
/* Print '#' characters */
for (j = 0; j < i; j++)
{
_putchar('#'); /* Print the '#' character */
}
_putchar('\n'); /* Move to the next line after each row */
}
}
