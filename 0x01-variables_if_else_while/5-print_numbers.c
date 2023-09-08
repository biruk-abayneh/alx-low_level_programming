#include <stdio.h>
/**
 * main - main is entry point
 * Return: 0 success
 */

int main(void)
{
char letter[10] = "0123456789";
int i = 0;

while (i < 10)
{
putchar(letter[i]);
i++;
}
printf("\n");
return (0);
}
