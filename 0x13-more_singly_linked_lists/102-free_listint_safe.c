#include <stddef.h>
#include "lists.h"
#include <stdlib.h>

/**
* free_listint_safe - Frees a listint_t list.
* @h: Double pointer to the head of the list.
* Return: The size of the list that was freed.
*/

size_t free_listint_safe(listint_t **h)
{
size_t i = 0;
listint_t *curr_node, *next_node;

curr_node = *h;
while (curr_node != NULL)
{
next_node = curr_node->next;
free(curr_node);
i = i + 1;
curr_node = next_node;
}

*h = NULL;
return (i);
}
