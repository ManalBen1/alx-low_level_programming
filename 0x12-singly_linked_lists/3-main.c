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
    list_t *head;

    head = NULL;
    add_node(&head, "Anne");
    add_node(&head, "Colton");
    add_node(&head, "Corbin");
    add_node(&head, "Daniel");
    add_node(&head, "Danton");
    add_node(&head, "David");
    add_node(&head, "Gary");
    add_node(&head, "Holden");
    add_node(&head, "Ian");
    add_node(&head, "Ian");
    add_node(&head, "Jay");
    add_node(&head, "Jennie");
    add_node(&head, "Jimmy");
    add_node(&head, "Justin");
    add_node(&head, "Kalson");
    add_node(&head, "Kina");
    add_node(&head, "Matthew");
    add_node(&head, "Max");
    add_node(&head, "Michael");
    add_node(&head, "Ntuj");
    add_node(&head, "Philip");
    add_node(&head, "Richard");
    add_node(&head, "Samantha");
    add_node(&head, "Stuart");
    add_node(&head, "Swati");
    add_node(&head, "Timothy");
    add_node(&head, "Victor");
    add_node(&head, "Walton");
    print_list(head);
    return (0);
}
