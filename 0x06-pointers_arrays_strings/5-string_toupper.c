#include "main.h"

/**
 * string_toupper - change a lower case to upper case in a string
 * @n: string to check
 * Return: converted string
 */

char *string_toupper(char *n)
{
int i;

i = 0;
while (n[i])
{
if ('a' <= n[i] && n[i] <= 'z')
{
n[i] = n[i] - 32;
}
i++;
}
return (n);
}
