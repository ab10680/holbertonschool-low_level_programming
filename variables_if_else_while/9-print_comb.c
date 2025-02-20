#include <stdio.h>

/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int digit;
for (digit = 0; digit < 10; digit++)
{
putchar(digit + '0');  /* Print the digit */
if (digit != 9)  /* Check if it's not the last digit */
{
putchar(',');  /* Print the comma */
putchar(' ');  /* Print the space */
}
}
putchar('\n');  /* Print a newline character */
return (0);
}
