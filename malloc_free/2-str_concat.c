#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated space in memory
 * containing the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int i, j, len1 = 0, len2 = 0;
/* Calculate the length of s1 */
while (s1 && s1[len1] != '\0')
len1++;
/* Calculate the length of s2 */
while (s2 && s2[len2] != '\0')
len2++;
/* Allocate memory for the concatenated string */
concat = malloc((len1 + len2 + 1) * sizeof(char));
if (concat == NULL)  /* Check if allocation failed */
return (NULL);
/* Copy s1 into concat */
for (i = 0; i < len1; i++)
{
concat[i] = s1[i];
}
/* Copy s2 into concat */
for (j = 0; j < len2; j++)
{
concat[i + j] = s2[j];
}
concat[len1 + len2] = '\0';  /* Null-terminate the concatenated string */
return (concat);  /* Return the pointer to the concatenated string */
}
