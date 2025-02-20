#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
int last_digit = n % 10; /* Get the last digit */
if (last_digit < 0) /* Handle negative last digit */
{
last_digit = -last_digit;
}
_putchar(last_digit + '0'); /* Print the last digit */
return (last_digit);
}
