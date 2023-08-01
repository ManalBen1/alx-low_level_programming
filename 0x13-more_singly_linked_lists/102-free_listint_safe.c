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
listint_t *curr = *h;

while (curr != NULL)
{
listint_t *next_node = curr->next;
free(curr);
curr = next_node;
i = i + 1;
if (i > 1000)
{
*h = NULL;
break;
}
}
*h = NULL;
return (i);
}
