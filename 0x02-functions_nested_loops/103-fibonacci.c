#include <stdio.h>
#include "main.h"
/**
 * main - print fibonacci evens only
 * Return: 0 and success
 */

int main(void)
{
unsigned long i, sum, x, y, z;

x = 0;
sum = 0;
y = 1;
for (i = 0; i < 50; i++)
{
z = x + y;
if (z < 4000000)
{
if (z % 2 == 0)
{
sum = sum + z;
}
x = y;
y = z;
}
}
printf("%lu\n", sum);
return (0);
}
