#include "main.h"

/**
 * _puts - prints a given string
 * @str: string to print
 */

void _puts(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
