#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check - checks the CLA
 * @argc: number of CLA
 * @argv: contents of CLA
 * Return: 1 if check fails or 0 if passes
 */

int check(int argc, char *argv[])
{
if (argc != 3)
{
	return (1);
}
if (!isdigit(*argv[1]) || !isdigit(*argv[2]))
{
	return (1);
}
return (0);
}

/**
 * main - multiplies two numbers
 * @argc: number of CLA
 * @argv: contents of CLA
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
int x, mul, num1, num2;

x = check(argc, argv);
if (x == 1)
{
	printf("Error\n");
	exit (98);
}
else if (x == 0)
{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
}
return (0);
}
