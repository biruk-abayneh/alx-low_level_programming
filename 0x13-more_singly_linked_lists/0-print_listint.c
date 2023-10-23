#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"

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
