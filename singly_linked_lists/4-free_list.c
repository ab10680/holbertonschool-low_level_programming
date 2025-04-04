#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */
void free_list(list_t *head)
{
list_t *temp;  /* Temporary pointer for traversal */
while (head)  /* Traverse the list */
{
temp = head;  /* Store the current node */
head = head->next;  /* Move to the next node */
free(temp->str);  /* Free the string */
free(temp);  /* Free the current node */
}
}
