#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: The number of elements.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory, or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int total_size, i;
/* If nmemb or size is 0, return NULL */
if (nmemb == 0 || size == 0)
return (NULL);
/* Calculate total size and allocate memory */
total_size = nmemb * size;
ptr = malloc(total_size);
/* Check if malloc failed */
if (ptr == NULL)
return (NULL);
/* Initialize allocated memory to zero */
for (i = 0; i < total_size; i++)
((char *)ptr)[i] = 0;
return (ptr);
}
