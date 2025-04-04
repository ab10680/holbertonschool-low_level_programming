#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t count = 0;
while (h)  /* Traverse the list */
{
if (h->str == NULL)  /* Check if the string is NULL */
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
count++;  /* Increment the count of nodes */
h = h->next;  /* Move to the next node */
}
return (count);  /* Return the total number of nodes */
}
