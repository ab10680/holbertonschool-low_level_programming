#include <unistd.h>
#include "main.h"

/**
 * print_square - prints a square of '#' characters
 * @size: the size of the square
 */
void print_square(int size)
{
int i, j; /* Declare loop variables outside the loops */
if (size <= 0)
{
_putchar('\n'); /* Print newline if size is 0 or less */
}
else
{
for (i = 0; i < size; i++) /* Loop for each row */
{
for (j = 0; j < size; j++) /* Loop for each column */
{
_putchar('#'); /* Print the '#' character */
}
_putchar('\n'); /* Move to the next line after each row */
}
}
}
