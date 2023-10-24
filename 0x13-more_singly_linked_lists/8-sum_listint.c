#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - add the contents of a list
 * @head: list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
int sum = 0;

if (!head)
	return (0);
while (head->next != NULL)
{
	sum = sum + head->n;
	head = head->next;
}
sum = sum + head->n;
return (sum);
}
