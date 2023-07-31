#include "lists.h"
#include <stdlib.h>

/**
*add_nodeint_end - adds a new node at the end of a listint_t list.
*@h:pointer
*@n:Integer
*Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **h, const int n)
{
listint_t *node2;
node2 = malloc(sizeof(listint_t));

if (node2 == NULL)
{
return (NULL);
}
node2->n = n;
node2->next = *h;
*h = node2;
return (node2);
}
