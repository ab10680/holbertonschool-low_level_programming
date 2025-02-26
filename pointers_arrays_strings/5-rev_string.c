#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string to be reversed.
 *
 * This function swaps characters in the string from the start
 * and the end, moving towards the center.
 */
void rev_string(char *s)
{
int length = 0;
int i;
char temp;
/* Calculate the length of the string */
while (s[length] != '\0')
{
length++;
}
/* Swap characters from the start and end */
for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - i - 1];
s[length - i - 1] = temp;
}
}
