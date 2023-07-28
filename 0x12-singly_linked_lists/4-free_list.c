#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_list - Frees a list_t list.
* @head: Pointer to the head of the list that should be freed.
* Prototype: void free_list(list_t *head).
* Description: This function frees all the nodes of a linked list and  strings.
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
