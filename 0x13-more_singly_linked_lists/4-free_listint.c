#include "lists.h"
#include <stdlib.h>

/**
* free_listint -   frees a listint_t list.
* @h: Pointer to the head of the list.
*/

void free_listint(listint_t *h)
{
listint_t *list;
while (h != NULL)
{
list  = h;
h = list->next;
free(list);
}
}
