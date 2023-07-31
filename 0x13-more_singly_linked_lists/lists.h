#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>
/**
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
* Description: singly linked list node structure
*/
typedef struct listint_s
{
int n;
struct listint_s *next;
}
listint_t;
/**
* print_listint - prints all the elements of a listint_t list
* @h: Pointer to the head of the list.
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h);
#endif /* LISTS_H */
