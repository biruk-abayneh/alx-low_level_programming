#include <stdio.h>
/**
 * main - Prints all 3 digit numbers
 * Return: 0 and exit
 */

int main(void)
{
int i, j, k;

for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
for (k = j + 1; k < 10; k++)
{
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);
putchar((i != 7 || j != 8 || k != 9) ? ',' : '\0');
putchar((i != 7 || j != 8 || k != 9) ? ' ' : '\n');
}
}
}
return (0);
}
