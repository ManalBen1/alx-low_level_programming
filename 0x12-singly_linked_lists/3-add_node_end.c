#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* Return: the address of the new element, or NULL if it failed.
* @str: needs to be duplicated.
* add_node_end - Adds a new node at the end of a list_t list.
* @head: Pointer to a pointer to the head of the list.
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newnode;
if (str == NULL || head == NULL)
return (NULL);
newnode = malloc(sizeof(list_t));
if (newnode == NULL)
return (NULL);
newnode->str = strdup(str);
if (newnode->str == NULL)
{
free(newnode);
return (NULL);
}
newnode->len = strlen(str);
newnode->next = NULL;
if (*head == NULL)
{
*head = newnode;
}
else
{
list_t *curr = *head;
while (curr->next != NULL)
curr = curr->next;
curr->next = newnode;
}
return (newnode);
}
