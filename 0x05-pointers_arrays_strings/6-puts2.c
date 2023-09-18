#include "main.h"

/**
 * puts2 - every other character
 * @str: all character
 */

void puts2(char *str)
{
int c = 0;
int i;
char *a = str;

while (*a != '\0')
{
c++;
a++;
}
for (i = 0; i < c; i++)
{
if (i % 2 == 0)
{
putchar(str[i]);
}
}
putchar('\n');
}
