#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
		  'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
		  'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
int i;

for (i = 0; i < 11; i++)
{
for (i = 0; i < 26; i++)
{
_putchar(lower[i]);
}
_putchar('\n');
}
}
