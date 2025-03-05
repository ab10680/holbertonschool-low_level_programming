#include "main.h"

/**
 * is_prime_number - Returns 1 if input int is prime no, otherwise return 0
 * @n: The integer to be checked.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
if (n <= 1) /* Check if n is less than or equal to 1 */
{
return (0); /* Not a prime number */
}
return (is_prime_helper(n, 2)); /* Start checking from divisor 2 */
}

/**
 * is_prime_helper - Helper function to check for primality.
 * @n: The number to check.
 * @divisor: The current divisor to test.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
if (divisor * divisor > n) /* If divisor exceeds the square root of n */
{
return (1); /* n is prime */
}
if (n % divisor == 0) /* If n is divisible by divisor */
{
return (0); /* n is not prime */
}
return (is_prime_helper(n, divisor + 1)); /* Check the next divisor */
}
