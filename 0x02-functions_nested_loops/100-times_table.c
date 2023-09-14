#include "main.h"
/**
 * print_times_table - print n times table
 * @n: number of table
 * Return: table
 */

void print_times_table(int n)
{

if ((n < 0) || (n > 15))
_putchar('\0');
else
{
int i, j, k;

for (i = 0; i < n + 1; i++)
{
for (j = 0; j < n + 1; j++)
{
k = i * j;
_putchar(k);
if (j == n)
{
_putchar('\n');
}
else if (j < n)
{
_putchar(',');
_putchar(' ');
}
}
}
}
}
