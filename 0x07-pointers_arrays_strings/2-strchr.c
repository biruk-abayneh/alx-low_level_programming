#include "main.h"
#include <stdio.h>

/**
 * _strchr - looks for charcacter
 * @s: string to check
 * @c: character to look for
 * Return: character
 */
char *_strchr(char *s, char c)
{
int i, l;
char *a;

l = 0;
while (*(s + l))
{
	l++;
}
for (i = 0; i < l; i++)
{
	if (s[i] == c)
	{
	return (&s[i]);
	}
}
return (a);
}
