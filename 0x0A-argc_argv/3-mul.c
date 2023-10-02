#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - print multiplication
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if not enough CLA
 */

int main(int argc, char *argv[])
{
if (argc < 3 || argc > 3)
{
	printf("Error\n");
	return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
