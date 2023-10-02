#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Adds positive numbers passed as command-line arguments.
 * Prints the result, or an error message
 * if an invalid argument is encountered.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 if successful, 1 if an error occurred.
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i;
char *arg;
int j;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
arg = argv[i];
j = 0;
while (arg[j] != '\0')
{
if (!isdigit((unsigned char)arg[j]))
{
printf("Error\n");
return (1);
}
j++;
}
sum += atoi(arg);
}

printf("%d\n", sum);
return (0);
}
