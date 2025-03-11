#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, or NULL if str is NULL
 * or if insufficient memory was available.
 */
char *_strdup(char *str)
{
char *duplicate;
int i, length = 0;
if (str == NULL)  /* Check if str is NULL */
return (NULL);
/* Calculate the length of the string */
while (str[length] != '\0')
length++;
/* Allocate memory for the duplicated string */
duplicate = malloc((length + 1) * sizeof(char));
if (duplicate == NULL)  /* Check if allocation failed */
return (NULL);
/* Copy the original string to the duplicated string */
for (i = 0; i < length; i++)
{
duplicate[i] = str[i];
}
duplicate[length] = '\0';  /* Null-terminate the duplicated string */
return (duplicate);  /* Return the pointer to the duplicated string */
}
