#ifndef LISTS_H
#define LISTS_H
#include <stddef.h>

/* Definition of the structure */
/**
* struct list_s - singly linked list:singly linked list node structure
*@str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
*/

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
}
list_t;
/* Function prototype */
size_t print_list(const list_t *h);
size_t list_len(const list_t *head);
list_t *add_node(list_t **head, const char *str);

#endif /* LISTS_H */
