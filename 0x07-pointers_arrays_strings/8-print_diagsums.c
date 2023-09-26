#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the diagonals of
 * a square array
 * @a: array
 * @size: size of array
 */

void print_diagsums(int *a, int size)
{
int i;
int sum = 0;
int sum2 = 0;

for (i = 0; i < size; i++)
{
	sum = sum + a[i * size + i];
}
for (i = 0; i < size; i++)
{
	sum2 = sum2 + a[i * size + (size - i - 1)];
}
printf("%d, %d\n", sum, sum2);
}
