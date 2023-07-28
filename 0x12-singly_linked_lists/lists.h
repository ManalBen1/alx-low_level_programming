#ifndef LISTS_H
#define LISTS_H

/* Definition of the structure */
/**
* struct list_s - singly linked list
* Description: singly linked list node structure
*@str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
*/

typedef struct list_s
{
char *str;
int len;
struct list_s *next;
}
list_t;

/* Function prototype */
size_t print_list(const list_t *h);
size_t list_len(const list_t *head);

#endif /* LISTS_H */

