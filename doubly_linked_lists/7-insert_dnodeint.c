#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Double pointer to the head of the list.
 * @idx: The index where the new node should be added.
 * @n: The integer value for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *current = *h;
unsigned int count = 0;
if (idx == 0)  /* Special case for adding at the head */
return (add_dnodeint(h, n));
new_node = malloc(sizeof(dlistint_t));
if (!new_node)  /* Check if memory allocation failed */
return (NULL);
new_node->n = n;
while (current && count < idx - 1)  /* Traverse to the desired position */
{
current = current->next;
count++;
}
if (!current)  /* If the index is out of range */
{
free(new_node);
return (NULL);
}
new_node->next = current->next;  /* Link new node to the next node */
new_node->prev = current;  /* Link new node back to the current node */
if (current->next)  /* If not inserting at the end */
current->next->prev = new_node;
current->next = new_node;  /* Link current node to the new node */
return (new_node);  /* Return the address of the new node */
}
