#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    listint_t *current = head;
    unsigned int i;
    
    for (i = 0; i < index; i++)
    {
	current = current->next;
    }
    return (current);
}
