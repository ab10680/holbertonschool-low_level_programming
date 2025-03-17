#include <stddef.h>

/**
 * int_index - Searches for an integer in an array.
 * @array: The array to search through.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function used to compare values.
 *
 * Return: The index of the first element for which cmp does not return 0,
 *         or -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || cmp == NULL || size <= 0)
/* Check for NULL pointers and size */
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)  /* Call the comparison function */
return (i);  /* Return index if the condition is met */
}
return (-1);  /* Return -1 if no match found */
}
