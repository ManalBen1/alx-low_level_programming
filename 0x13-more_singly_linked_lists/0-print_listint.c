#include "lists.h"
#include <stdio.h>

/**
* print_listint: prints all the elements of a listint_t list. 
* Description: function that prints all the elements of a listint_t list.
* @h: Pointer to the head of the list.
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t num_nodes = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
num_nodes = num_nodes + 1;
}
return(num_nodes);
}
