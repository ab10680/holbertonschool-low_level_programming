#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: A pointer to the new dog_t, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog = malloc(sizeof(dog_t));  /* Allocate memory for a new dog */
if (dog == NULL)  /* Check if memory allocation succeeded */
return (NULL);
/* Allocate memory and copy the name */
dog->name = malloc(strlen(name) + 1);
if (dog->name == NULL)
{
free(dog);  /* Free previously allocated memory */
return (NULL);
}
strcpy(dog->name, name);  /* Copy the name */
/* Allocate memory and copy the owner */
dog->owner = malloc(strlen(owner) + 1);
if (dog->owner == NULL)
{
free(dog->name);  /* Free previously allocated name */
free(dog);        /* Free the dog structure */
return (NULL);
}
strcpy(dog->owner, owner);  /* Copy the owner */
dog->age = age;  /* Set the age */
return (dog);  /* Return the new dog */
}
