#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer, or 0 if no valid integer is found.
 */
int _atoi(char *s)
{
int sign = 1; /* Initialize sign to positive */
unsigned int num = 0; /* Initialize the number to 0 */
int i = 0; /* Initialize index */
/* Skip non-numeric characters */
while (s[i] != '\0')
{
if (s[i] == '-')
sign *= -1; /* Toggle sign for each '-' */
else if (s[i] >= '0' && s[i] <= '9')
{
/* Convert to int */
while (s[i] >= '0' && s[i] <= '9')
{
num = num * 10 + (s[i] - '0');
i++;
}
break; /* Exit after processing the number */
}
i++;
}
return (sign *num); /* Return the result with the sign */
}
