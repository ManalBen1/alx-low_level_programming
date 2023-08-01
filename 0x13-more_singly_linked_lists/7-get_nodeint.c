#include "lists.h"

/**
* get_nodeint_at_index - Returns the nth node of a listint_t linked list.
* @h: Pointer to the head of the list.
* @index: Index of the node, starting at 0.
* Return: The nth node, or NULL if it doesn't exist.
*/
listint_t *get_nodeint_at_index(listint_t *h, unsigned int index)
{
listint_t *nth_node;
unsigned int i;

nth_node = h;
i = 0;
while (nth_node != NULL)
{
if (i == index)
return (nth_node);
i = i + 1;
nth_node = nth_node->next;
}
return (NULL);
}
