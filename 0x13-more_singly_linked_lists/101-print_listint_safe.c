#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list.
* @h: Pointer to the head of the list.
* Return: The number of nodes in the list.
*/

size_t print_listint_safe(const listint_t *h)
{
size_t i  = 0;
const listint_t *temp = h;

while (temp != NULL && i < 30)
{
printf("%d\n", temp->n);

temp = temp->next;
i = i + 1;
}

if (i >= 30)
{
printf("output.\n");
}

return (i);
}
