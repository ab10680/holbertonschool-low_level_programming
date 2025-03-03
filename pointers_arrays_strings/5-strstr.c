#include "main.h"
#include <stddef.h>

/*
 * _strstr - Locates a substring.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to locate.
 *
 * Return: A pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
char *h;  /* Pointer for traversing haystack */
char *n;  /* Pointer for traversing needle */
/* If needle is an empty string, return haystack */
if (*needle == '\0')
{
return (haystack);  /* Add parentheses here */
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
return (haystack);  /* Add parentheses here */
}
haystack++;  /* Move to the next character in haystack */
}
return (NULL);  /* Add parentheses here */
}
