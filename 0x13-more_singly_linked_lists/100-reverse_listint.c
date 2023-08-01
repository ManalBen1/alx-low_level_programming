#include "lists.h"

/**
* reverse_listint - Reverses a listint_t linked list.
* @h: Double pointer to the head of the list.
* Return: A pointer to the first node of the reversed list.
*/
listint_t *reverse_listint(listint_t **h)
{
listint_t *node1 = NULL;
listint_t *node2 = *h;
listint_t *next = NULL;

while (node2 != NULL)
{
next = node2->next;
node2->next = node1;
node1 = node2;
node2 = next;
}
*h = node1;
return (*h);
}
