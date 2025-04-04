#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * string_length - calculates the length of a string
 * @str: the string to measure
 *
 * Return: the length of the string
 */
unsigned int string_length(const char *str)
{
unsigned int length = 0;
while (str[length])  /* Iterate until the end of the string */
{
length++;  /* Increment length for each character */
}
return (length);  /* Return the total length */
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be duplicated and added
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
new_node = malloc(sizeof(list_t));  /* Allocate memory for new node */
if (new_node == NULL)  /* Check if malloc failed */
{
return (NULL);
}
new_node->str = strdup(str);  /* Duplicate the string */
if (new_node->str == NULL)  /* Check if strdup failed */
{
free(new_node);  /* Free the allocated node */
return (NULL);
}
new_node->len = string_length(new_node->str);
/* Use custom function to get string length */
new_node->next = *head;  /* Link new node to the current head */
*head = new_node;  /* Update head to point to the new node */
return (new_node);  /* Return the address of the new element */
}
