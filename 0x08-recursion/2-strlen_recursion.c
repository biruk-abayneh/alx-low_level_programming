#include "main.h"
/**
 * _strlen_recursion - returns the length of string
 * @s: string
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
int c = 0;

if (*s)
{
	c++;
	c = c + _strlen_recursion(s + 1);
}
return (c);
}
