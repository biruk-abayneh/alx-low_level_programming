#include "main.h"


/**
 * reverse_array - reverse the contents of the array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i, x;

for (i = 0; i < (n / 2); i++)
{
x = a[i];
a[i] = a[((n - 1) - i)];
a[((n - 1) - i)] = x;
}
}
