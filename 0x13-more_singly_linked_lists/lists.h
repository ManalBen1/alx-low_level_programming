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
} listint_t;

/**
* print_listint - prints all the elements of a listint_t list
* @h: Pointer to the head of the list
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h);

/**
* listint_len - returns the number of elements in a linked listint_t list
* @h: Pointer to the head of the list
* Return: the number of nodes
*/
size_t listint_len(const listint_t *h);

/**
* add_nodeint - adds a new node at the beginning of a listint_t list
* @h: Double pointer to the head of the list
* @n: Integer value to be added
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **h, const int n);

/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @h: Double pointer to the head of the list
* @n: Integer value to be added
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **h, const int n);

/**
* free_listint - frees a listint_t list
* @h: Pointer to the head of the list
*/
void free_listint(listint_t *h);

/**
* free_listint2 - frees a listint_t list
* @h: Double pointer to the head of the list
*/
void free_listint2(listint_t **h);

/**
* pop_listint - deletes the head node of a listint_t linked list
* @h: Double pointer to the head of the list
* Return: the head node's data (n) or 0 if the list is empty
*/
int pop_listint(listint_t **h);

/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @h: Pointer to the head of the list
* @index: Index of the node, starting at 0
* Return: the nth node, or NULL if the node does not exist
*/
listint_t *get_nodeint_at_index(listint_t *h, unsigned int index);

/**
* sum_listint - returns the sum of all the data (n) of a listint_t linked list
* @h: Pointer to the head of the list
* Return: the sum of all the data, or 0 if the list is empty
*/
int sum_listint(listint_t *h);

/**
* insert_nodeint_at_index - inserts a new node at a given position
* @h: Double pointer to the head of the list
* @idx: Index of the new node to be inserted
* @n: Integer value to be inserted
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **h, unsigned int idx, int n);

/**
* delete_nodeint_at_index - deletes the node at index index
* of a listint_t linked list
* @h: Double pointer to the head of the list
* @index: Index of the node to be deleted
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **h, unsigned int index);


/**
* reverse_listint -  reverses a listint_t linked list.
* @h: Pointer to the head of the list
* Return: a pointer to the first node of the reversed list
*/

listint_t *reverse_listint(listint_t **h);


/**
* print_listint_safe - prints a listint_t linked list.
* @h: Pointer to the head of the list
* Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *h);



/**
*free_listint_safe  -  frees a listint_t list.
* @h: Pointer to the head of the list
* Return: the size of the list that was free’d
*/

size_t free_listint_safe(listint_t **h);


/**
* find_listint_loop -  finds the loop in a linked list.
* @h: Pointer to the head of the list
* Return: The address of the node where the loop starts, 
* or NULL if there is no loop
*/

listint_t *find_listint_loop(listint_t *h);


#endif /* LISTS_H */
