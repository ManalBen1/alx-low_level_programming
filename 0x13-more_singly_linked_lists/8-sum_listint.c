#include "lists.h"

/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list.
* @h: Pointer to the head of the list.
* Return: sum of all the data (n) in the linked list, or 0 if the list is empty
*/

int sum_listint(listint_t *h)
{
int sum = 0;
while (h != NULL)
{
sum += h->n;
h = h->next;
}
return (sum);
}
