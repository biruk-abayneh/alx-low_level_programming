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
if (i != 98)
printf("%d", i);
else if (i == 98)
printf("%d\n", i);
}
}
else if (n > 98)
{
for (i = n; i > 97; i--)
{
if (i != 98)
printf("%d, ", i);
else if (i == 98)
printf("%d\n", i);
}
}
else if (n == 98)
{
printf("98\n");
}
}
