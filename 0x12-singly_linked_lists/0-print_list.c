#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* print_list - Prints all the elements of a list_t list.
* @head: Pointer to the head of the list.
* Return: The number of nodes in the list.
*/
size_t print_list(const list_t *head)
{
size_t count = 0;

while (head != NULL)
{
if (head->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", head->len, head->str);

count++;
head = head->next;
}

return (count);
}
