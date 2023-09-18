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

for (i = 0; i < (n - 1); i++)
{
printf("%d, ", a[i]);
}
if (i == (n - 1))
{
printf("%d", a[n - 1]);
}
printf("\n");
}
