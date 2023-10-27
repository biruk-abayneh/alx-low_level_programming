#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, x = 0;
	unsigned long int current;
	unsigned long int p = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = p >> a;
		if (current & 1)
			x++;
	}

	return (x);
}
