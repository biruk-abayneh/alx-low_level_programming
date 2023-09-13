#include "main.h"
/**
 * print_to_98 - prints natural numbers
 * @n: integer
 * Return: result
 */

void print_to_98(int n)
{
int i;

if (n < 98)
{
for (i = n; i < 99; i++)
{
_putchar(i);
_putchar((i == 98) ? ',' : '\0');
_putchar((i == 98) ? ' ' : '\n');
}
}
else if (n > 98)
{
for (i = n; i > 97; i--)
{
_putchar(i);
_putchar((i == 98) ? ',' : '\0');
_putchar((i == 98) ? ' ' : '\n');
}
}
else if (n == 98)
{
_putchar('0' + n);
_putchar('\n');
}
}
