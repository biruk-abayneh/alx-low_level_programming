#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node to the end of a list
 * @head: list
 * @n: new node
 * Return: new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *current = *head;

new = malloc(sizeof(listint_t));
if (!new)
return (NULL);

new->n = n;
new->next = NULL;

if (*head == NULL)
{
*head = new;
return (new);
}

while (current->next)
current = current->next;
current->next = new;

return (new);
}
