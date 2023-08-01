#include "lists.h"
#include <stdlib.h>

/**
* delete_nodeint_at_index - Deletes the node at index index
* of a listint_t linked list.
* @h: Double pointer to the head of the list.
* @index: Index of the node that should be deleted. Index starts at 0.
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **h, unsigned int index)
{
unsigned int i;
listint_t *curr_node;
listint_t *prev_node;
if (h == NULL)
return (-1);
if (*h == NULL)
return (-1);

curr_node = *h;
prev_node = NULL;
i = 0;
while (curr_node != NULL)
{
if (i == index)
{
if (prev_node == NULL)
{
*h = curr_node->next;
}
else
{
prev_node->next = curr_node->next;
}
free(curr_node);
return (1);
}
prev_node = curr_node;
curr_node = curr_node->next;
i = i + 1;
}
return (-1);
}
