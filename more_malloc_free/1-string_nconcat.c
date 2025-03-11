#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The number of bytes from s2 to concatenate.
 *
 * Return: A pointer to newly allocated memory containing concatenated string.
 * If the function fails, it returns NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int len1 = 0, len2 = 0, total_len, i;
/* Handle NULL strings by treating them as empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
/* Calculate lengths of s1 and s2 */
while (s1[len1] != '\0')
len1++;
while (s2[len2] != '\0')
len2++;
/* Use the entire s2 if n is greater than or equal to its length */
if (n >= len2)
n = len2;
/* Calculate total length for the new string */
total_len = len1 + n;
/* Allocate memory for the new concatenated string */
concat = malloc(total_len + 1); /* +1 for the null terminator */
if (concat == NULL)
return (NULL);
/* Copy s1 to concat */
for (i = 0; i < len1; i++)
concat[i] = s1[i];
/* Copy first n bytes of s2 to concat */
for (i = 0; i < n; i++)
concat[len1 + i] = s2[i];
/* Null terminate the concatenated string */
concat[total_len] = '\0';
return (concat);
}
