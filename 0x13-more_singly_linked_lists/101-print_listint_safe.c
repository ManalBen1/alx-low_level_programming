#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list.
* @h: Pointer to the beginning of the list.
* Return: The number of nodes in the list.
*/

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
exit(98);
}
}

printf("[%p] %d\n", (void *)slow_one, slow_one->n);
i = i + 1;

return (i);
}
