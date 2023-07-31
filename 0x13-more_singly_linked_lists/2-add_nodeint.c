#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - adds a new node at the beginning of a listint_t list.
* @h: Pointer to the head of the list.
* @n: integer.
* Return: the address of the new element, or NULL if it failed.
*/

listint_t *add_nodeint(listint_t **h, const int n)
{
listint_t *node1;
node1 = malloc(sizeof(listint_t));
if (node1 == NULL)
{
return (NULL);
}
node1->n = n;
node1->next = h;
h = node1;
return (node1);
}
