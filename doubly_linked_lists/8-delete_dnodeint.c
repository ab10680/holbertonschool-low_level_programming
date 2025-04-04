#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: Double pointer to the head of the list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = *head;
unsigned int count = 0;
if (!head || !*head)  /* Check if the list is empty */
return (-1);
if (index == 0)  /* Special case for deleting the head */
{
*head = current->next;  /* Move head to the next node */
if (*head)  /* If the list is not empty after deletion */
(*head)->prev = NULL;
free(current);  /* Free the old head */
return (1);
}
while (current && count < index)  /* Traverse to the desired index */
{
current = current->next;
count++;
}
if (!current)  /* If the index is out of range */
return (-1);
/* Adjust the pointers to bypass the node to be deleted */
if (current->prev)
current->prev->next = current->next;
if (current->next)
current->next->prev = current->prev;
free(current);  /* Free the node */
return (1);  /* Return success */
}
