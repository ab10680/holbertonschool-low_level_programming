#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a dlistint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;  /* Initialize node count */
while (h)  /* Traverse the list */
{
count++;  /* Increment the count for each node */
h = h->next;  /* Move to the next node */
}
return (count);  /* Return the total number of nodes */
}
