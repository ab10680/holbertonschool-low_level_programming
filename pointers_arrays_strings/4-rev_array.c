#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
int temp, start = 0, end = n - 1;
while (start < end)
{
/* Swap the elements */
temp = a[start];
a[start] = a[end];
a[end] = temp;
/* Move towards the middle */
start++;
end--;
}
}
