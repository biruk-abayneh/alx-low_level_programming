#include "main.h"
/**
 * main - check the code
 * @s: string to check
 * Return: Always 0.
 */

int _strlen(char *s)
{
int count = 0;

while (*s != '\0')
{
count++;
s++;
}
return (count);
}
