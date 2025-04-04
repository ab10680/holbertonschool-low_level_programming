#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;  /* Initialize sum to 0 */
while (head)  /* Traverse the list */
{
sum += head->n;  /* Add the current node's data to sum */
head = head->next;  /* Move to the next node */
}
return (sum);  /* Return the total sum */
}
