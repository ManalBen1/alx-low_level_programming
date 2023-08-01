#include <stddef.h>
#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @h: Pointer to the head of the list.
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *h)
{
listint_t *an = h;

while (an && an->next)
{
an = an->next->next;
h = h->next;

if (an == h)
{
an = h;
while (an != h)
{
an = an->next;
h = h->next;
}
return (h);
}
}
return (NULL);
}
