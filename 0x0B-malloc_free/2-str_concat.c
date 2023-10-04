#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: conctenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = ci = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[ci] != '\0')
		ci++;
	a = malloc(sizeof(char) * (i + ci + 1));

	if (a == NULL)
		return (NULL);
	i = ci = 0;
	while (s1[i] != '\0')
	{
		a[i] = s1[i];
		i++;
	}

	while (s2[ci] != '\0')
	{
		a[i] = s2[ci];
		i++, ci++;
	}
	a[i] = '\0';
	return (a);
}
