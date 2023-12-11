#include "main.h"

/**
 * _strchr - looks for charcacter
 * @s: string to check
 * @c: character to look for
 * Return: character
 */

char *_strchr(char *s, char c)
{
int i = 0;

for (; s[i] >= '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}
return (0);
}
