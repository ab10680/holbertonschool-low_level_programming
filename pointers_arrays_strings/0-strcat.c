#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to which the source string will be appended.
 * @src: The source string to append to the destination string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;
/* Move ptr to the end of the dest string */
while (*ptr != '\0')
{
ptr++;
}
/* Append src to dest */
while (*src != '\0')
{
*ptr = *src;
ptr++;
src++;
}
/* Add the terminating null byte */
*ptr = '\0';
return (dest);  /* Added parentheses around the return value */
}
