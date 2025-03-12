#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the details of a struct dog.
 * @d: Pointer to the struct dog to print.
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
if (d == NULL)  /* Check if the pointer is NULL */
return;
/* Print name, age, and owner with (nil) if NULL */
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
