#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be scanned.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s
 *         which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;  /* To count the matching bytes */
char *p;
while (*s)  /* Loop through each character in s */
{
p = accept;  /* Reset p to the beginning of accept */
while (*p)  /* Loop through each character in accept */
{
if (*s == *p)  /* Check if the character in s matches any in accept */
{
count++;  /* Increment count if there's a match */
break;  /* Break the inner loop to proceed to the next character in s */
}
p++;  /* Move to the next character in accept */
}
if (!*p)  /* If no match was found in accept, break the outer loop */
{
break;
}
s++;  /* Move to the next character in s */
}
return (count);  /* Return the count of matching bytes with parentheses */
}
