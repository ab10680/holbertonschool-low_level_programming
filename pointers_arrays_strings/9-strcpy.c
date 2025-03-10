#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src,
 * including the terminating null byte, to the buffer pointed to by dest.
 * @dest: Pointer to the destination buffer.
 * @src: Pointer to the source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++) /* Copy until the null byte */
{
dest[i] = src[i];
}
dest[i] = '\0'; /* Add the null byte at the end */
return (dest); /* Return the destination pointer with parentheses */
}
