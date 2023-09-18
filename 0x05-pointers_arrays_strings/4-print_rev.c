#include "main.h"

/**
 * print_rev - check the code
 * @s: string to reverse
 */

void print_rev(char *s)
{
int c = 0;
int i;

while (*s != '\0')
{
c++;
s++;
}
s--;
for (i = c; i > 0; i--)
{
_putchar(*s);
s--;
}
_putchar('\n');
}
