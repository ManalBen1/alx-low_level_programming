#include "lists.h"
#include <stdlib.h>

/**
* insert_nodeint_at_index - Inserts a new node at a given position.
* @h: Double pointer to the head of the list.
* @index: Index where the new node should be added. Index starts at 0.
* @n: Integer value for the new node.
* Return: The address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int index, int n)
{
unsigned int i = 0;
listint_t *node, *curr_node;
node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);
node->n = n;
node->next = NULL;
if (index == 0)
{
node->next = *h;
*h = node;
return (node);
}
curr_node = *h;
while (curr_node != NULL)
{
if (i == index - 1)
{
node->next = curr_node->next;
curr_node->next = node;
return (node);
}
curr_node = curr_node->next;
i = i + 1;
}
free(node);
return (NULL);
}
