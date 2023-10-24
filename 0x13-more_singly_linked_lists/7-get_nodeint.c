#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - gives the node at a specified position
 * @head: list
 * @index: position
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int i, len;

len = 0;
while (head->next != NULL)
{
head = head->next;
len++;
}
if (index >= len)
return (NULL);
for (i = 0; i < index; i++)
{
	current = current->next;
}
return (current);
}
