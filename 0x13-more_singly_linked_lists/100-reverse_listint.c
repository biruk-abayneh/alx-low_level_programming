#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a list
 * @head: list
 * Return: pointer to the new list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *p = NULL;
listint_t *n = NULL;

while (*head)
{
n = (*head)->n;
(*head)->n = p;
p = *head;
*head = n;
}

*head = p;

return (*head);
}
