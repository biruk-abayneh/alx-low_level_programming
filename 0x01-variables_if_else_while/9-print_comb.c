#include <stdio.h>
/**
 * main - main is entry point
 * Return: 0 success
 */

int main(void)
{
int letter[] = {'0', ',', ' ', '1', ',', ' ', '2', ',', ' ', '3',
		',', ' ', '4', ',', ' ', '5', ',', ' ', '6', ',',
		' ', '7', ',', ' ', '8', ',', ' ', '9'};
int i = 0;

while (i < 28)
{
putchar(letter[i]);
i++;
}
putchar('\n');
return (0);
}
