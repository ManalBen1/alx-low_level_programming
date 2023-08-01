#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - Deletes the head node of a listint_t linked list.
* @h: Double pointer to the head of the list.
* Return: The data (n) of the deleted head node, or 0 if the list is empty.
*/

int pop_listint(listint_t **h)
{
if (h == NULL)
{
return (0);
}
if (*h == NULL)
{
return (0);
}
else
{
int data;

listint_t *temp;

data = (*h)->n;
temp = *h;
*h = (*h)->next;
free(temp);
return (data);
}
}
