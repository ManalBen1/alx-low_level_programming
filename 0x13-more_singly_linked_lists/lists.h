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
* listint_len -  returns the number of elements in a linked listint_t list.
* @h: Pointer to the head of the list.
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
/**
* add_nodeint -  adds a new node at the beginning of a listint_t list.
* @n: integer.
* @h: Pointer to the head of the list.
* Return: the address of the new element, or NULL if it failed.
*/
listint_t *add_nodeint(listint_t **h, const int n);
listint_t *add_nodeint_end(listint_t **h, const int n);
#endif /* LISTS_H */
