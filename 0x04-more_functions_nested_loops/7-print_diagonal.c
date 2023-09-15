#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * Return: Always 0.
 */

void print_diagonal(int n)
{
if ( n <= 0)
_putchar('\n');
else
{
int i, j;

for (i = 0; i < n; i++)
{
for (j = 0; j < i + 1; j++)
{
if (j < i)
_putchar(' ');
else
_putchar('\\');
}
_putchar('\n');
}
}
}
