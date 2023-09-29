#include "main.h"
/**
 * _sqrt_recursion - returns the integer square root
 * of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root, or -1 if the number
 * has no integer square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (actual_sqrt_recursion(n, 1, n));
}

/**
 * actual_sqrt_recursion - helper function to recursively find
 * the integer
 * square root of a number using binary search approach
 * @n: number to calculate the square root of
 * @start: lower bound of the search range
 * @end: upper bound of the search range
 * Return: the resulting square root, or -1 if the number has no
 * integer square root
 */
int actual_sqrt_recursion(int n, int start, int end)
{
int mid = (start + end) / 2;

if (start <= end)
{
if (mid == n / mid && n % mid == 0)
return (mid);
if (mid < n / mid)
return (actual_sqrt_recursion(n, mid + 1, end));
return (actual_sqrt_recursion(n, start, mid - 1));
}

return (-1);
}
