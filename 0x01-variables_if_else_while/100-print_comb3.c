#include <stdio.h>
/**
 * main - main is entry point
 * Return: 0 success
 */
int main(void)
{
int i, j;

for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
putchar('0' + i);
putchar('0' + j);
putchar((i != 8 || j != 9) ? ',' : '\0');
putchar((i != 8 || j != 9) ? ' ' : '\n');
}
}
return (0);
}
