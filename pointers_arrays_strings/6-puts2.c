#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: Pointer to the string to be printed.
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)  /* Print characters at even indices */
{
_putchar(str[i]);
}
}
_putchar('\n'); /* Print a new line at the end */
}
