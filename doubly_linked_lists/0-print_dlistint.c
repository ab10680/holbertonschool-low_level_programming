#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;  /* Initialize node count */
while (h)  /* Traverse the list */
{
printf("%d\n", h->n);  /* Print the value of the current node */
count++;  /* Increment the count */
h = h->next;  /* Move to the next node */
}
return (count);  /* Return the total number of nodes */
}
