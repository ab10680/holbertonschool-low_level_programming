#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: The integer value for the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
dlistint_t *temp = *head;
if (!new_node)  /* Check if memory allocation failed */
return (NULL);
new_node->n = n;  /* Set the value of the new node */
new_node->next = NULL;  /* New node will be the last node */
if (*head == NULL)  /* If the list is empty, make new node the head */
{
new_node->prev = NULL;
*head = new_node;
return (new_node);
}
while (temp->next)  /* Traverse to the last node */
temp = temp->next;
temp->next = new_node;  /* Link the last node to the new node */
new_node->prev = temp;  /* Link the new node back to the last node */
return (new_node);  /* Return the address of the new node */
}
