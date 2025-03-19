#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - Prints strings followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;
/* Initialize the argument list */
va_start(args, n);
/* Print each string */
for (i = 0; i < n; i++)
{
str = va_arg(args, char*); /* Get the string */
/* Print the string or (nil) if it's NULL */
if (str != NULL)
{
printf("%s", str);
}
else
{
printf("(nil)");
}
/* Print separator if it's not the last string and not NULL */
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
