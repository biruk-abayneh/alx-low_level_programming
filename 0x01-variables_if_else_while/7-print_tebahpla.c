#include <stdio.h>
/**
 * main - main is entry point
 * Return: 0 success
 */

int main(void)
{
char letter[26] = "zyxwvutsrqponmlkjihgfedcba";
int i = 0;

while (i < 26)
{
putchar(letter[i]);
i++;
}
printf("\n");
return (0);
}
