#include "main.h"

/**
 * _pow - returns the power of a numeber
 * @base: base
 * @exponent: power
 * Return: answer for the exponent
 */
unsigned long int _pow(unsigned int base, unsigned int exponent)
{
	unsigned long int n;
	unsigned int a;

	n = 1;
	for (a = 1; a <= exponent; a++)
		n *= base;
	return (n);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number
 */
void print_binary(unsigned long int n)
{
	unsigned long int a, b;
	char x;

	x = 0;
	a = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (a != 0)
	{
		b = n & a;
		if (b == a)
		{
			x = 1;
			_putchar('1');
		}
		else if (x == 1 || a == 1)
		{
			_putchar('0');
		}
		a >>= 1;
	}
}
