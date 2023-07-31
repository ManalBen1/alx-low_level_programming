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
    int sum;

    h = NULL;
    add_nodeint_end(&h, 0);
    add_nodeint_end(&h, 1);
    add_nodeint_end(&h, 2);
    add_nodeint_end(&h, 3);
    add_nodeint_end(&h, 4);
    add_nodeint_end(&h, 98);
    add_nodeint_end(&h, 402);
    add_nodeint_end(&h, 1024);
    sum = sum_listint(h);
    printf("sum = %d\n", sum);
    free_listint2(&h);
    return (0);
}
