#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: natural square root or -1 if n does not have natural square root
 */
int _sqrt_recursion(int n)
{
if (n < 0) /* Check if n is negative */
{
return (-1); /* Return -1 for negative numbers */
}
return (_sqrt_helper(n, 0)); /* Start the helper function */
}

/**
 * _sqrt_helper - Helper function to find the square root.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root, or -1 if not found.
 */
int _sqrt_helper(int n, int guess)
{
if (guess * guess > n) /* If guess squared is greater than n */
{
return (-1); /* Return -1 if no natural square root */
}
else if (guess * guess == n) /* If guess squared equals n */
{
return (guess); /* Return the guess as the square root */
}
return (_sqrt_helper(n, guess + 1)); /* Increment guess and try again */
}
