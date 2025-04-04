#include "main.h"

/**
 * flip_bits - Returns the number of bits you would need to flip
 *              to get from one number to another.
 * @n: First number.
 * @m: Second number.
 *
 * Return: The number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_result = n ^ m;  /* XOR to find differing bits */
unsigned int count = 0;
while (xor_result > 0)
{
count += (xor_result & 1);  /* Count the number of 1s */
xor_result >>= 1;  /* Right shift to check the next bit */
}
return (count);
}
