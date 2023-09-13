#include "main.h"
/**
 * print_to_98 - prints natural numbers
 * @n: integer
 * Return: result
 */

void print_to_98(int n)
{
int i;

for (i = n; i < 99; i++)
{
_putchar('0' + i);
_putchar((i == 98) ? ',' : '\0');
_putchar((i == 98) ? ' ' : '\0');
}
return (0);
}
