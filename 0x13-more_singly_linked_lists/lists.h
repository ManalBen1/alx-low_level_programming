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

/**
*free_listint - frees a listint_t list.
*@h: Pointer to the head of the list.
*/ 
void free_listint(listint_t *h);

/**
* free_listint2 - frees a listint_t list.
*@h: Pointer to the head of the list.
* @n: integer.
*/
void free_listint2(listint_t **h);
/**
*pop_listint -  deletes the head node of a listint_t linked list.
*@h: Pointer to the head of the list.
* @n: integer.
*returns the head node’s data (n).
*/

int pop_listint(listint_t **h);

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list.
* where index is the index of the node, starting at 0
* if the node does not exist, return NULL
*/

listint_t *get_nodeint_at_index(listint_t *h, unsigned int index);

/**
* sum_listint -  returns the sum of all the data (n) of a listint_t linked list.
* @h: Pointer to the head of the list.
* if the list is empty, return 0
*/

int sum_listint(listint_t *h);

/**
* insert_nodeint_at_index -  inserts a new node at a given position.
* @n: integer.
*@h: Pointer to the head of the list.
* where idx is the index of the list where the new node should be added. Index starts at 0
* Returns: the address of the new node, or NULL if it failed
* if it is not possible to add the new node at index idx, do not add the new node and return NULL
*/

listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n);

/**
* delete_nodeint_at_index - deletes the node at index index of a listint_t linked list.
* Returns: 1 if it succeeded, -1 if it failed
* @h: Pointer to the head of the list.
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index);







#endif /* LISTS_H */
