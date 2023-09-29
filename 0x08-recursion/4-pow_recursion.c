#include "main.h"
/**
 * _pow_recursion - returns x the power of y
 * @x: x
 * @y: y
 * Return: x the power of y
 */

int _pow_recursion(int x, int y)
{
int a = 1;

if (y < 0)
	return (-1);
if (y > 0)
{
	a = _pow_recursion(x, y - 1) * x;
}
return (a);
}
