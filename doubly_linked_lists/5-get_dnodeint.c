#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list.
 * @head: Pointer to the head of the list.
 * @index: The index of the node to retrieve, starting from 0.
 *
 * Return: The address of the node at index, or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count = 0;  /* Initialize the node counter */
while (head)  /* Traverse the list */
{
if (count == index)  /* Check if we've reached the desired index */
return (head);  /* Return the current node */
head = head->next;  /* Move to the next node */
count++;  /* Increment the counter */
}
return (NULL);  /* Return NULL if the index is out of range */
}
