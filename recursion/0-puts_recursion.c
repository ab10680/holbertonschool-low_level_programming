#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: The string to be printed.
 *
 * Description: This function prints each character of the string
 * recursively until it reaches the null terminator, then it prints
 * a new line.
 */
void _puts_recursion(char *s)
{
if (*s) /* Check if the current character is not the null terminator */
{
_putchar(*s); /* Print the current character */
_puts_recursion(s + 1); /* Recursive call with the next character */
}
else
{
_putchar('\n'); /* Print a new line at the end */
}
}
