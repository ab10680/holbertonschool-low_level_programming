#include "main.h"

/**
 * _puts - Prints a string, followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * This function uses a loop to print each character of the string.
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str); /* Print each character */
str++;
}
_putchar('\n'); /* Print a new line after the string */
}
