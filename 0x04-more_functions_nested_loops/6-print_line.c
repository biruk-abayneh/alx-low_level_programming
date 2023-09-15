#include "main.h"
/**
 * print_line - print a horizontal line
 *
 * Return: a line
 */
void print_line(int n)
{
int i;

for (i = 0; i < n + 1; i++)
{
if (i < n)
_putchar('_');
else
_putchar('\n');
}
}
