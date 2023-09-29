#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to check factorial
 * Return: factorial
 */

int factorial(int n)
{
int m = 1;

if (n == 0)
{
	return (1);
}
else if (n < 0)
{
	return (-1);
}
else if (n > 1)
{
	m = n * factorial(n - 1);
}
return (m);
}
