#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
char let[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
int i = 0;

while (i < 52)
{
putchar(let[i]);
i++;
}
printf("\n");
return (0);
}
