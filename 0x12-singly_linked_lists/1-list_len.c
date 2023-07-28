#include <stddef.h>
#include "lists.h"

/**
* list_len - Returns the number of elements in a linked list_t list.
* @head: Pointer to the head of the list.
* Return: The number of nodes in the list.
*/
size_t list_len(const list_t *head)
{
size_t count = 0;
const list_t *curr = head;
while (curr != NULL)
{
count = count + 1;
curr = curr->next;
}

return (count);
}
