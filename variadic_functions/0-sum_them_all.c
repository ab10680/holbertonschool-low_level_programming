#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: Number of parameters.
 *
 * Return: The sum of all parameters, or 0 if n is 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i, sum = 0;
/* If n is 0, return 0 */
if (n == 0)
{
return (0);
}
/* Initialize the argument list */
va_start(args, n);
/* Sum all parameters */
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
/* Clean up the argument list */
va_end(args);
return (sum);
}
