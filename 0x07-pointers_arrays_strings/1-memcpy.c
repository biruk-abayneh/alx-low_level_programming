#include "main.h"

/**
 * _memcpy - copies n number of bytes from src to dest
 * @dest: dest
 * @src: src
 * @n: number of bytes
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;

for (; n != 0; i++)
{
dest[i] = src[i];
n--;
}
return (dest);
}
