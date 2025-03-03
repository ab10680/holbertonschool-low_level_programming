#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string whose length is to be calculated.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0') /* Base case: if the current char is the null terminator */
{
return (0); /* Return length 0 */
}
else
{
return (1 + _strlen_recursion(s + 1)); /* Recursive call & count the char */
}
}
