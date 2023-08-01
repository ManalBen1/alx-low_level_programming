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
size_t i = 0;
const listint_t *slow = h;
const listint_t *fast = h;

while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
printf("Loop detected! Truncated output.\n");
return (i);
}

printf("%d\n", slow->n);
i = i + 1;
}

return (i);
}
