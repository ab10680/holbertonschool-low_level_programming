#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet speak).
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
char *ptr = str;
char *leet_chars = "43071"; /* Corresponding replacements for a, e, o, t, l */
char letters[] = "aeotlAEOTL"; /* Letters to be replaced */
int i; /* Declare 'i' here */
while (*ptr)
{
for (i = 0; letters[i]; i++)
{
if (*ptr == letters[i])
{
*ptr = leet_chars[i / 2]; /* Replace with the corresponding leet character */
break; /* Exit the for loop if a replacement was made */
}
}
ptr++;
}
return (str); /* Added parentheses around the return value */
}
