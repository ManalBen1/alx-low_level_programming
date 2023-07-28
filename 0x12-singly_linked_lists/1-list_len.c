#include <stddef.h>
#include "lists.h"

/**
* list_len_recursive - Helper function for list_len.
* @h: Pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t list_len_recursive(const list_t *h)
{
if (h == NULL)
return (0);
return (1 + list_len_recursive(h->next));
}

/**
* list_len - Returns the number of elements in a linked list_t list.
*/
size_t list_len(const list_t *h)
{
return (list_len_recursive(h));
}

