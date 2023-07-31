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
    listint_t *new;
    listint_t hello = {8, NULL};
    size_t n;

    h = &hello;
    new = malloc(sizeof(listint_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->n = 9;
    new->next = h;
    h = new;
    n = print_listint(h);
    printf("-> %lu elements\n", n);
    free(new);
    return (0);
}
