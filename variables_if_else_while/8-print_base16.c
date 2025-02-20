#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;
for (digit = 0; digit < 16; digit++)
{
if (digit < 10)
{
putchar(digit + '0');  /* Print digits 0-9 */
}
else
{
putchar(digit - 10 + 'a');  /* Print letters a-f */
}
}
putchar('\n');  /* Print a newline character */
return (0);
}
