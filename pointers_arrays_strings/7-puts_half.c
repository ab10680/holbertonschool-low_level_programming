#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line.
 * @str: Pointer to the string to be printed.
 *
 * If the number of characters is odd, the function prints
 * the last n characters of the string, where
 * n = (length_of_the_string + 1) / 2.
 */
void puts_half(char *str)
{
int length = 0;
int start_index;
int i; /* Declare the loop variable here */
/* Calculate the length of the string */
while (str[length] != '\0')
{
length++;
}
/* Determine the starting index for the second half */
if (length % 2 == 0) /* If even, start from half */
{
start_index = length / 2;
}
else /* If odd, start from (length + 1) / 2 */
{
start_index = (length + 1) / 2;
}
/* Print the second half of the string */
for (i = start_index; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n'); /* Print a new line at the end */
}
