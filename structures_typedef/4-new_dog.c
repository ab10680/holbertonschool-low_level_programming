#include <stdlib.h>
#include "dog.h"

/**
 * _str_len - Calculates the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
int _str_len(char *str)
{
int length = 0;
while (str[length] != '\0')
{
length++;
}
return (length);  /* Added parentheses */
}

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
dog_t *dog;
int name_len, owner_len, i;
dog = malloc(sizeof(dog_t));  /* Allocate memory for a new dog */
if (dog == NULL)  /* Check if memory allocation succeeded */
return (NULL);  /* Added parentheses */
/* Allocate memory and copy the name */
name_len = _str_len(name);
dog->name = malloc(name_len + 1);
if (dog->name == NULL)
{
free(dog);  /* Free previously allocated memory */
return (NULL);  /* Added parentheses */
}
for (i = 0; i < name_len; i++)
dog->name[i] = name[i];
dog->name[name_len] = '\0';  /* Null-terminate the string */
/* Allocate memory and copy the owner */
owner_len = _str_len(owner);
dog->owner = malloc(owner_len + 1);
if (dog->owner == NULL)
{
free(dog->name);  /* Free previously allocated name */
free(dog);        /* Free the dog structure */
return (NULL);  /* Added parentheses */
}
for (i = 0; i < owner_len; i++)
dog->owner[i] = owner[i];
dog->owner[owner_len] = '\0';  /* Null-terminate the string */
dog->age = age;  /* Set the age */
return (dog);  /* Added parentheses */
}
