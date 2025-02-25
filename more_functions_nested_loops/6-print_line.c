#include <unistd.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times to print the '_' character
 */
void print_line(int n)
{
int i; /* Declare the variable outside the loop */
if (n <= 0)
{
_putchar('\n'); /* Print newline if n is 0 or less */
}
else
{
for (i = 0; i < n; i++)
{
_putchar('_'); /* Print the '_' character n times */
}
_putchar('\n'); /* Print a newline at the end */
}
}
