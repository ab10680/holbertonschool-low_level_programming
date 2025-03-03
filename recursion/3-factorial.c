#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial for.
 *
 * Return: The factorial of n, or -1 if n is lower than 0.
 */
int factorial(int n)
{
if (n < 0) /* Check if n is less than 0 */
{
return (-1); /* Return -1 to indicate an error */
}
else if (n == 0) /* Base case: factorial of 0 is 1 */
{
return (1);
}
else /* Recursive case */
{
return (n * factorial(n - 1)); /* Calculate factorial recursively */
}
}
