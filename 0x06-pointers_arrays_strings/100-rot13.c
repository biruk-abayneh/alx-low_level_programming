#include "main.h"
#include <stdio.h>

/**
 * rot13 - vonvert to rot-13
 * @s: string to convert
 * Return: converted string
 */

char *rot13(char *s)
{
int i;
int j;
char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 52; j++)
{
if (s[i] == a[j])
{
s[i] = b[j];
break;
}
}
}
return (s);
}
