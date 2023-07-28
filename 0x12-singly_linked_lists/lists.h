#ifndef LISTS_H
#define LISTS_H

/* Definition of the structure */
typedef struct list_s
{
    char *str;
    int len;
    struct list_s *next;
} list_t;

/* Function prototype */
size_t print_list(const list_t *h);

#endif /* LISTS_H */

