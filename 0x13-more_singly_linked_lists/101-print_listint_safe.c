#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
const listint_t *slow = head, *fast = head;
size_t count = 0;
if (head == NULL)
return(0);

while (slow != NULL && fast != NULL && fast->next != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;

slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
printf("[%p] %d\n", (void *)slow, slow->n);
printf("-> [%p] %d\n", (void *)fast->next, fast->next->n);
exit(98);
}
}

if (slow != NULL)
{
printf("[%p] %d\n", (void *)slow, slow->n);
count++;
}

return(count);
}
