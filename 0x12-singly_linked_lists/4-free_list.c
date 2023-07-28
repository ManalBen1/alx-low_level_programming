#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* Prototype: void free_list(list_t *head).
*@head: it's a pointer to the head of the freed list.
*/

void free_list(list_t *head)
{
list_t *curr;
while (head != NULL)
{
curr = head;
head = head->next;
free(curr->str);
free(curr);
}
}
