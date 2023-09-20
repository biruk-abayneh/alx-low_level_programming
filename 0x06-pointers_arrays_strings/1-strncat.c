#include "main.h"

/**
 * _strncat - concatenate string based on specified number of byte
 * @dest: first string to concatenate
 * @src: second string to concatenate
 * @n: number of byte
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
int i, l, a;

i = 0;
while (*(dest + i))
{
i++;
}
l = 0;
while (*(src + l))
{
l++;
}
if (n < l)
{
for (a = 0; a < n; a++)
{
dest[(i + a)] = src[a];
}
}
else if (n >= l)
{
for (a = 0; a < l; a++)
{
dest[(i + a)] = src[a];
}
}
return (dest);
}
