#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head)  /* Traverse the list */
{
temp = head;  /* Store the current node */
head = head->next;  /* Move to the next node */
free(temp);  /* Free the current node */
}
}
