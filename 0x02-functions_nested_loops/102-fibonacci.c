#include <stdio.h>
#include "main.h"
/**
 * main - print fibonacci
 * Return: 0 and success
 */

int main(void)
{
unsigned long i, x, y, z;

x = 0;
y = 1;
for (i = 0; i < 50; i++)
{
z = x + y;
printf("%lu", z);

x = y;
y = z;
if (i == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
