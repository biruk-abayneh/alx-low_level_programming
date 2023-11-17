#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * main - copies a file into a new file
 * @ac: number of command line argument
 * @av: command line arguments
 * Return: 0(SUCCESS) 1(FAIL)
 */

int main(int ac, char **av)
{
char *buf[BUFFER_SIZE];
int fd1, fd2, r, w;

if (ac != 3)
{
    fprintf(stderr, "Usage: cp file_from file_to\n");
	exit(97);
}
fd1 = open(av[1], O_RDONLY | O_EXCL);
if (fd1 == -1)
{
    fprintf(stderr, "Error: Can't read from file %s\n", av[1]);
	exit(98);
}
fd2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0662);
if (fd2 == -1)
{
    fprintf(stderr, "Error: Can't write to %s\n", av[2]);
	exit(99);
}
while ((r = read(fd1, buf, BUFFER_SIZE)) > 0)
{
	w = write(fd2, buf, r);
	if (w == -1)
	{
	    fprintf(stderr, "Error: Can't write to %s\n", av[2]);
	exit(99);
	}
}
if (close(fd1))
{
    fprintf(stderr, "Error: Can't close fd\n");
	exit(100);
}
if (close(fd2))
{
    fprintf(stderr, "Error: Can't close fd\n");
	exit(100);
}
return (0);
}
