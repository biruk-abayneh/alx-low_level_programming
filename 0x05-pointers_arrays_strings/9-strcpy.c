#include "main.h"

/**
 * _strcpy - assign src to dest
 * @dest: dest
 * @src: source file
 * Return: Always dest.
 */

char *_strcpy(char *dest, char *src)
{
int c, i;

while (*(src + c) != '\0')
c++;
for (i = 0; i < c; i++)
{
dest[i] = src[i];
}
dest[c] = '\0';
return (dest);
}
