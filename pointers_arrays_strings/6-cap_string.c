#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
int i = 0;
int capitalize_next = 1; /* Flag to indicate if next char shd be capitalized */
char separators[] = " \t\n,;.!?\"(){}"; /* Word separators */
int j; /* Declare 'j' here */
while (str[i])
{
if (capitalize_next && str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32; /* Convert to uppercase */
}
capitalize_next = 0; /* Reset the flag */
/* Check if the current character is a separator */
for (j = 0; separators[j]; j++)
{
if (str[i] == separators[j])
{
capitalize_next = 1; /* Next character should be capitalized */
break;
}
}
i++;
}
return (str); /* Added parentheses around the return value for Betty style */
}
