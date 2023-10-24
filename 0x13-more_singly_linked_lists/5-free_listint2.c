#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free the memory of list
 * @head: list
 */

void free_listint2(listint_t **head)
{
listint_t *temp;

while (*head)
{
temp = (*head)->next;
free(*head);
	*head = temp;
}
*head = NULL;
}
