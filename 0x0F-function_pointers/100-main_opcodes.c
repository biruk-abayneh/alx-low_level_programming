#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own instructions
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	unsigned char *arr; /* Use unsigned char to ensure correct printing of opcodes */

	if (argc != 2)
	{
		printf("Usage: %s <number of bytes>\n", argv[0]);
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes <= 0)
	{
		printf("Invalid number of bytes: %s\n", argv[1]);
		exit(2);
	}

	arr = (unsigned char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", arr[i]);

		if (i != bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
