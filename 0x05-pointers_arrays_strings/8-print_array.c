#include <stdio.h>
#include "main.h"

/**
 * print_array - print the array
 * @a: the array
 * @n: number of element of the array
 */

void print_array(int *a, int n)
{
int i;
int s = sizeof(*a) / sizeof(*a[0]);

if (s != n)
printf("\n");
else
{
for (i = 0; i < n - 1; i++)
{
printf("%d, ", *(a + i));
}
printf("%d\n", *(a + n - 1));
}
}
