#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to search.
 * @index: The index of the bit to get.
 *
 * Return: The value of the bit at index index, or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= sizeof(n) * 8)  /* Check if index is out of range */
return (-1);
return ((n >> index) & 1);  /* Right shift and mask to get the bit */
}
