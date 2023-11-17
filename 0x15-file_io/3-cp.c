#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - copies a file into a new file
 * @ac: number of command line argument
 * @av: command line arguments
 * Return: 0(SUCCESS) 1(FAIL)
 */

#define BUFFER_SIZE 1024

int main(int ac, char **av)
{
char *buf[BUFFER_SIZE];
int fd1, fd2, r, w;

if (ac != 3)
{
	printf("Usage: cp file_from file_to\n");
	exit(97);
}
fd1 = open(av[1], O_RDONLY | O_EXCL);
if (fd1 == -1)
{
	printf("Error: Can't read from file %s\n", av[1]);
	exit(98);
}
fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0662);
if (fd2 == -1)
{
	printf("Error: Can't write to %s\n", av[2]);
	exit(99);
}
while ((r = read(fd1, buf, BUFFER_SIZE)) > 0)
{
	w = write(fd2, buf, BUFFER_SIZE);
	if (w == -1)
	{
	printf("Error: Can't write to %s\n", av[2]);
	exit(99);
	}
}
if (close(fd1))
{
	printf("Error: Can't close fd %d\n", fd1);
	exit(100);
}
if (close(fd2))
{
	printf("Error: Can't close fd %d\n", fd2);
	exit(100);
}
return (0);
}
