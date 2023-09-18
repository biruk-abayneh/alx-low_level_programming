#include "main.h"


/**
 * puts_half - print half of string
 * @str: string
 */

void puts_half(char *str)
{
int c = 0;
int i;
char *a = str;

while (*a != '\0')
{
a++;
c++;
}
if (c % 2 == 0)
{
for (i = (c / 2); i < c; i++)
{
_putchar(str[i]);
}
}
else
{
for (i = ((c + 1) / 2); i < c; i++)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
