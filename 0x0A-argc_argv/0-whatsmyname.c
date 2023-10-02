#include <stdio.h>
#include "main.h"
/**
 * main - print program name
 * @argc: number of command line argument
 * @argv: command line argument
 * Return: 0 and success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
