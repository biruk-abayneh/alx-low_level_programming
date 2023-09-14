#include <stdio.h>
#include "main.h"
/**
 * main - print sum of multiples of 3 or 5
 * Return: 0 is success
 */

int main(void)
{
int i, sum;

sum = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
sum = i + sum;
}
}
printf("%d \n", sum);
return (0);
}
