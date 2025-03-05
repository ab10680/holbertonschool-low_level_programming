#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: The value of x raised to the power of y, or -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
if (y < 0) /* Check if y is less than 0 */
{
return (-1); /* Return -1 to indicate an error */
}
else if (y == 0) /* Base case: anything raised to the power of 0 is 1 */
{
return (1);
}
else /* Recursive case */
{
return (x * _pow_recursion(x, y - 1)); /* Calculate power recursively */
}
}
