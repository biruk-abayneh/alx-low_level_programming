#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
const listint_t *first, *second;
size_t new = 1;

if (head == NULL || head->next == NULL)
return (0);

first = head->next;
second = (head->next)->next;

while (second)
{
if (first == second)
{
first = head;
while (first != second)
{
new++;
first = first->next;
second = second->next;
}
first = first->next;
while (first != second)
{
new++;
first = first->next;
}
return (new);
}
first = first->next;
second = (second->next)->next;
}

return (0);
}

/**
 * print_listint_safe - prints a listint_t list safely.
 * @head: list.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t new, n = 0;

new = looped_listint_len(head);
if (new == 0)
{
for (; head != NULL; new++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (n = 0; n < new; n++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (new);
}
