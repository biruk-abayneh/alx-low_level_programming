#include "main.h"

/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: sting
 * @accept: substring
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
int i, l, match;
unsigned int count = 0;

for (i = 0; *(s + i); i++)
{
match = 0;
for (l = 0; *(accept + l); l++)
{
if (*(s + i) == *(accept + l))
{
match = 1;
}
}
if (!match)
count++;
}
return (count);
}
