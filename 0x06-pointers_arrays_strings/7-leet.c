#include "main.h"

/**
 * leet - change a string to leet code
 * @n: string to change
 * Return: changed string
 */

char *leet(char *n)
{
int i, j;
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";

for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (n[i] == a[j])
{
n[i] = b[j];
}
}
}
return (n);
}
