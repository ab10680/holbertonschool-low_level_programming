#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
/* Initialize the argument list */
va_start(args, n);
/* Print each number */
for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int)); /* Print the integer */
/* Print separator if it's not the last number and not NULL */
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
/* Clean up the argument list */
va_end(args);
/* Print a new line */
printf("\n");
}
