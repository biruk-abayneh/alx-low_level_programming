#include "main.h"

/**
 * cap_string - Capitalize the string
 * @n: string to check
 * Return: checked string
 */

char *cap_string(char *n)
{
int i = 0;

while (n[i])
{
if (n[i] == ' ' || n[i] == '\n' || n[i] == '\t' || n[i] == ';'
|| n[i] == '"' || n[i] == ',' || n[i] == '.'
|| n[i] == '!' || n[i] == '?' ||
n[i] == '(' ||
n[i] == ')' ||
n[i] == '{' ||
n[i] == '}')
{
if (n[(i + 1)] >= 'a' && n[(i + 1)] <= 'z')
{
n[(i + 1)] = n[(i + 1)] - 32;
}
}
i++;
}
return (n);
}
