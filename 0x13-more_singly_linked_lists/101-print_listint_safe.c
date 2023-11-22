#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint_safe - Prints a linked list of numbers.
* @h: The start of the list.
* Return: The total number of nodes.
*/
size_t print_listint_safe(const listint_t *h)
{
size_t i = 0;
const listint_t *slow_one = h;
const listint_t *fast_one = h;

if (h == NULL)
return (0);

while (fast_one && fast_one->next)
{
printf("[%p] %d\n", (void *)slow_one, slow_one->n);
i = i + 1;
slow_one = slow_one->next;
fast_one = fast_one->next->next;

if (slow_one == fast_one)
{
printf("[%p] %d\n", (void *)slow_one, slow_one->n);
printf("Loop at [%p] %d\n", (void *)fast_one, fast_one->n);
return(1);
}
}

printf("[%p] %d\n", (void *)slow_one, slow_one->n);
i = i + 1;

return (0);
}
