#include "main.h"
/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: Number to evaluate.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, 2));
}

/**
 * actual_prime - Helper function to recursively determine
 * if a number is prime.
 * @n: Number to evaluate.
 * @i: Divisor to check.
 *
 * Return: 1 if n is prime, 0 if not.
 */

int actual_prime(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (actual_prime(n, i + 1));
}
