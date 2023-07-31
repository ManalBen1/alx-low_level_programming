#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - Frees a listint_t list and sets the head to NULL.
* @h: Double pointer to the head of the list.
*/
void free_listint2(listint_t **h)
{
listint_t *list, *temp;

if (h == NULL)
return;
list = *h;
while (list != NULL)
{
temp = list;
list = list->next;
free(temp);
}
*h = NULL;
}
