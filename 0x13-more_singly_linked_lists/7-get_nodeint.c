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
unsigned int i = 0;
listint_t *current = head;

while (current && i < index)
{
current = current->next;
i++;
}

return (current ? current : NULL);
}
