#include <unistd.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 */
void print_numbers(void)
{
char c; /* Declare variable before the loop */
for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n'); /* Print a new line at the end */
}
