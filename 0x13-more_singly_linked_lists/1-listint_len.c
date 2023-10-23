#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

/**
 * listint_len - return the number of elements of a list
 * @h: list
 * Return: number of element
 */

size_t listint_len(const listint_t *h)
{
unsigned int a;

a = 0;
while (h != NULL)
{
	a++;
	h = h->next;
}
return (a);
}
