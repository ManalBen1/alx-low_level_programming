#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* add_node - Adds a new node at the beginning of a list_t list.
* @head: Pointer to a pointer to the head of the list.
* @str: The string to be duplicated and added to the new node.
* Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
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
newnode->len = 0;
while (str[newnode->len] != '\0')
newnode->len++;
newnode->next = *head;
*head = newnode;
return (newnode); }
