#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the bytes to match.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
char *p;
while (*s)  /* Loop through each character in s */
{
p = accept;  /* Reset p to the beginning of accept */
while (*p)  /* Loop through each character in accept */
{
if (*s == *p)  /* Check if the character in s matches any in accept */
{
return (s);  /* Return the pointer to the matching character in s */
}
p++;  /* Move to the next character in accept */
}
s++;  /* Move to the next character in s */
}
return (NULL);  /* Return NULL if no match is found */
}
