#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * print_listint - print the contents of list
 * @h: list
 * Return: number of print
 */

size_t print_listint(const listint_t *h)
{
unsigned int a;

a = 0;
while (h != NULL)
{
	printf("%d\n", h->n);
	a++;
	h = h->next;
}
return (a);
}
