#include "lists.h"
#include <stdio.h>

/**
* listint_len -  returns the number of elements in a linked listint_t list.
* @h: Pointer to the head of the list.
* Return:  number of elements in a linked listint_t list.
*/

size_t listint_len(const listint_t *h)
{
size_t num_elements = 0;
while (h != NULL)
{
h = h->next;
num_elements = num_elements + 1;
}
return (num_elements);
}
