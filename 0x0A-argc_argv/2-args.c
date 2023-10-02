#include <stdio.h>
#include "main.h"
/**
 * main - print all CLA with a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 and success
 */

int main(int argc, char *argv[])
{
for (int i = 0; i < argc; i++)
{
	printf("%s\n", argv[i]);
}
return (0);
}
