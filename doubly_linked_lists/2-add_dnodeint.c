#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Double pointer to the head of the list.
 * @n: The integer value for the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (!new_node)  /* Check if memory allocation failed */
return (NULL);
new_node->n = n;  /* Set the value of the new node */
new_node->prev = NULL;  /* New node will be the first node */
new_node->next = *head;  /* Link new node to the current head */
if (*head)  /* If the list is not empty, update the previous head */
(*head)->prev = new_node;
*head = new_node;  /* Update head to the new node */
return (new_node);  /* Return the address of the new node */
}
