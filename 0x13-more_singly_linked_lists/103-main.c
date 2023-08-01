#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *h;
    listint_t *h2;
    listint_t *node;

    h2 = NULL;
    add_nodeint(&h2, 0);
    add_nodeint(&h2, 1);
    add_nodeint(&h2, 2);
    add_nodeint(&h2, 3);
    add_nodeint(&h2, 4);
    add_nodeint(&h2, 98);
    add_nodeint(&h2, 402);
    add_nodeint(&h2, 1024);
    print_listint_safe(h2);
    node = find_listint_loop(h2);
    if (node != NULL)
    {
        printf("Loop starts at [%p] %d\n", (void *)node, node->n);
    }
    free_listint_safe(&h2);
    h = NULL;
    node = add_nodeint(&h, 0);
    add_nodeint(&h, 1);
    add_nodeint(&h, 2);
    add_nodeint(&h, 3);
    add_nodeint(&h, 4);
    add_nodeint(&h, 5);
    add_nodeint(&h, 6);
    node->next = add_nodeint(&h, 7);
    add_nodeint(&h, 98);
    add_nodeint(&h, 402);
    add_nodeint(&h, 1024);
    print_listint_safe(h);
    node = find_listint_loop(h);
    if (node != NULL)
    {
        printf("Loop starts at [%p] %d\n", (void *)node, node->n);
    }
    free_listint_safe(&h);
    return (0);
}

