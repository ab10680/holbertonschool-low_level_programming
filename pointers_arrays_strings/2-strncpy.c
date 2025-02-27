#include "main.h"

/**
 * _strncpy - Copies a string from src to dest.
 * @dest: The destination string.
 * @src: The source string to copy from.
 * @n: The maximum number of bytes to copy from src.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;
/* Copy up to n bytes from src to dest */
while (n > 0 && *src != '\0')
{
*ptr = *src;
ptr++;
src++;
n--;
}
/* If there are still bytes remaining, fill them with '\0' */
while (n > 0)
{
*ptr = '\0';
ptr++;
n--;
}
return (dest); /* Added parentheses around the return value for Betty style */
}
