#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src.
 * @dest: The destination string to which the source string will be appended.
 * @src: The source string to append to the destination string.
 * @n: The maximum number of bytes to use from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;
/* Move ptr to the end of the dest string */
while (*ptr != '\0')
{
ptr++;
}
/* Append up to n bytes from src to dest */
while (n > 0 && *src != '\0')
{
*ptr = *src;
ptr++;
src++;
n--;
}
/* Add the terminating null byte */
*ptr = '\0';
return (dest); /* Added parentheses around the return value */
}
