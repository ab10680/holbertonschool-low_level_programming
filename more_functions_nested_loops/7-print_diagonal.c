#include <unistd.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal
 * @n: number of times to print the '\' character
 */
void print_diagonal(int n)
{
int i, j; /* Declare variables outside the loops */
if (n <= 0)
{
_putchar('\n'); /* Print newline if n is 0 or less */
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' '); /* Print spaces before the '\' */
}
_putchar('\\'); /* Print the '\' character */
_putchar('\n'); /* Move to the next line */
}
}
}
