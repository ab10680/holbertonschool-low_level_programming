#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to convert and print.
 */
void print_binary(unsigned long int n)
{
if (n >> 1)  /* Check if there are more bits to print */
print_binary(n >> 1);  /* Recursive call with n right-shifted */
_putchar((n & 1) + '0');  /* Print the least significant bit */
}
