#include "lists.h"

/**
* find_listint_loop - Finds the loop in a linked list.
* @h: Pointer to the head of the list.
* Return: The address of the node where the loop starts,
* or NULL if there is no loop.
*/
listint_t *find_listint_loop(listint_t *h)
{
listint_t *slow = h, *fast = h;

while (slow != NULL && fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
slow = h;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}

return (NULL);
}
