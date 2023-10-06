#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - cocatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size of memory
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int len, len2, i;

len = 0, len2 = 0, i = 0;
while (s1 && s1[len])
	len++;
while (s2 && s2[len2])
	len2++;
if (n >= len2)
	ptr = malloc(sizeof(char) * (len + len2 + 1));
else if (n < len2)
	ptr = malloc(sizeof(char) * (len + n + 1));
if (ptr == NULL)
	return (NULL);
while (i < len)
{
	ptr[i] = s1[i];
	i++;
}
if (n >= len2)
{
	while (i < (len + len2))
	{
	ptr[i] = s2[(i - len)];
	i++;
	}
}
else
{
	while ( i < (len + n))
	{
	ptr[i] = s2[(i - len)];
	i++;
	}
}
ptr[i] = '\0';
return (ptr);
}
