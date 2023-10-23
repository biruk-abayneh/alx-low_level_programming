#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node to the begining of a list
 * @head: list
 * @n: new node
 * Return: new list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(struct listint_s));
if (new == NULL)
{
	return (NULL);
}
else
{
new->n = n;
new->next = *head;
*head = new;
return (new);
}
}
