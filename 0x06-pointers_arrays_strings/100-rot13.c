#include "main.h"

/**
 * leet - change a string to leet code
 * @n: string to change
 * Return: changed string
 */

char *rot13(char *n)
{
int i, j;
char a[] = "ABCDEFGHIJKLM";
char b[] = "NOPQRSTUVWXYZ";
char c[] = "abcdefghijklm";
char d[] = "nopqrstuvwxyz";

for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 13; j++)
{
if (n[i] == a[j])
{
n[i] = b[j];
}
}
}
return (n);
}
