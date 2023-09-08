#include <stdio.h>
/**
 * main - main is entry point
 * Return: 0 success
 */

int main(void)
{
char letter[16] = "0123456789abcdef";
int i = 0;

while (i < 16)
{
putchar(letter[i]);
i++;
}
printf("\n");
return (0);
}
