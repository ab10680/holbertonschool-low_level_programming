#include <stddef.h>
#include "main.h"

/**
 * _strstr - Finds the first occurrence of the substring `needle`
 *            in the string `haystack`.
 * @haystack: The string to be searched.
 * @needle: The substring to find.
 *
 * This function returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if `needle` is an empty string or not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *h;  /* Pointer for traversing haystack */
char *n;  /* Pointer for traversing needle */
/* If needle is an empty string, return haystack */
if (*needle == '\0')
{
return (haystack);
}
while (*haystack)  /* Loop through each character in haystack */
{
h = haystack;  /* Set h to the current position in haystack */
n = needle;    /* Set n to the start of needle */
/* Check if the substring matches */
while (*h && *n && (*h == *n))
{
h++;
n++;
}
/* If we reached the end of needle, we found a match */
if (!*n)
{
return (haystack);
}
haystack++;  /* Move to the next character in haystack */
}
return (NULL);  /* Return NULL if no match is found */
}
