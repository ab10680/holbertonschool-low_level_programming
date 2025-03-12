#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog.
 * @d: The dog to free.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->name);   /* Free the name string */
free(d->owner);  /* Free the owner string */
free(d);         /* Free the dog structure */
}
