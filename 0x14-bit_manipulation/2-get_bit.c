#include"main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a, b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = 1 << index;
	b = n & a;
	if (b == a)
		return (1);
	return (0);
}
