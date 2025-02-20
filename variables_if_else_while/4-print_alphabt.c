#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, excluding 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q') /* Exclude 'e' and 'q' */
{
putchar(letter);
}
}
putchar('\n'); /* Print a newline character */
return (0);
}
