#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
size_t count = 0;
while (h)  /* Traverse the list */
{
count++;  /* Increment count for each node */
h = h->next;  /* Move to the next node */
}
return (count);  /* Return the total count of nodes */
}
