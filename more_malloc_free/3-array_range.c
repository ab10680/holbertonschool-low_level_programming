#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max.
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return: A pointer to the newly created array, or NULL if it fails.
 */
int *array_range(int min, int max)
{
int *array;
int size, i;
/* Check if min is greater than max */
if (min > max)
return (NULL);
/* Calculate the size of the array */
size = max - min + 1;
/* Allocate memory for the array */
array = malloc(size *sizeof(int));
if (array == NULL)
return (NULL);
/* Populate the array with values from min to max */
for (i = 0; i < size; i++)
array[i] = min + i;
return (array);
}
