#include <stddef.h>
#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: Pointer to a struct dog to initialize.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)  /* Check if the pointer is valid */
{
d->name = name;  /* Set the dog's name */
d->age = age;    /* Set the dog's age */
d->owner = owner; /* Set the owner's name */
}
}
