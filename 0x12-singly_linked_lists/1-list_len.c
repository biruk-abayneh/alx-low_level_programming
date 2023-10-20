#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - returns the number of nodes
 * @h: A struct
 * Return: length of nodes
 */

size_t list_len(const list_t *h)
{
int a = 0;


while (h)
{
a++;
h = h->next;
}
return (a);
}
