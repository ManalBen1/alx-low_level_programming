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
    listint_t *head2;
    listint_t *node;

    head2 = NULL;
    add_nodeint(&head2, 0);
    add_nodeint(&head2, 1);
    add_nodeint(&head2, 2);
    add_nodeint(&head2, 3);
    add_nodeint(&head2, 4);
    add_nodeint(&head2, 98);
    add_nodeint(&head2, 402);
    add_nodeint(&head2, 1024);
    print_listint_safe(head2);
    h = NULL;
    node = add_nodeint(&h, 0);
    add_nodeint(&h, 1);
    add_nodeint(&h, 2);
    add_nodeint(&h, 3);
    add_nodeint(&h, 4);
    node->next = add_nodeint(&h, 98);
    add_nodeint(&h, 402);
    add_nodeint(&h, 1024);
    print_listint_safe(h);
    return (0);
}

