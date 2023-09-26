#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring
 * needle in the string haystack. The terminating null
 * bytes (\0) are not compared
 * @haystack: string to check
 * @needle: string to look for
 * Return: pointer to needle
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		printf("%s, %s\n", l, p);
		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
