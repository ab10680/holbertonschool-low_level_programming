#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to the string to be searched.
 * @c: The character to locate.
 *
 * Return: A pointer to the 1st occurrence of the character c in the string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
while (*s)  /* Iterate through the string until the null terminator */
{
if (*s == c)  /* Check if the current character matches c */
{
return (s);  /* Return the pointer to the character in the string */
}
s++;  /* Move to the next character */
}
return ((*s == c) ? s : NULL);  /* Check for the null terminator case */
}
