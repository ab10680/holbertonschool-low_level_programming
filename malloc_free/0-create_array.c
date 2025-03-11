#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates array of chars & initializes it with specified char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Description: This function allocates memory for an array of size `size`
 * and fills it with the character `c`. If size is 0 or if the memory
 * allocation fails, it returns NULL.
 *
 * Return: A pointer to the array, or NULL if it fails or size is 0.
 */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;
if (size == 0)  /* Check if size is 0 */
return (NULL);
array = malloc(size * sizeof(char));  /* Allocate memory */
if (array == NULL)  /* Check if allocation failed */
return (NULL);
for (i = 0; i < size; i++)  /* Fill the array with the specified character */
{
array[i] = c;
}
return (array);  /* Return the pointer to the array */
}
