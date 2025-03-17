#include "function_pointers.h"

/**
 * print_name - prints a name using the function passed as a pointer
 * @name: name of the person
 * @f: function pointer to the function that prints the name
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
/* Check for null pointers */
if (name && f)
{
/* Call the function pointer with the name */
f(name);
}
}
