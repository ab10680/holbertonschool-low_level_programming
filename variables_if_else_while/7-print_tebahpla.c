#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int letter;
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);  /* Print each letter */
}
putchar('\n');  /* Print a newline character */
return (0);
}
