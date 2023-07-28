#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a list_t list.
* @head: Pointer to a pointer to the head of the list.
* @str: The string to be duplicated and added to the new node.
*/
list_t *add_node(list_t **head, const char *str)
{
if (str == NULL || head == NULL)
return (NULL);
size_t B;
list_t *new_node;
B = sizeof(list_t);
new_node = malloc(B);
if (new_node == NULL)
return (NULL);
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = 0;
while (str[new_node->len] != '\0')
new_node->len++;
new_node->next = *head;
*head = new_node;
return (new_node);
}
