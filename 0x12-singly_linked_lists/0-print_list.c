#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints the contents of a struct
 * @h: a struct
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
int a = 0;

while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
a++;
h = h->next;
}
return (a);
}

