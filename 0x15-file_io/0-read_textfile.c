#include "main.h"

/**
 * read_textfile - reads text from a file and prints to stdout
 * @filename: name of the file to read
 * @letters: amount of letters in the file to read and print
 * Return: amount of characters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t a;
char *buf;
ssize_t bytesread;
ssize_t byteswritten;

if (filename == NULL)
	return (0);

a = open(filename, O_RDONLY);
if (a == -1)
{
	close(a);
	return (0);
}

buf = malloc((letters + 1) * sizeof(char));
bytesread = read(a, buf, letters);
if (bytesread == 0)
{
	close(a);
	free(buf);
	return (0);
}
buf[bytesread] = '\0';
byteswritten = write(STDOUT_FILENO, buf, bytesread);

free(buf);
close(a);
return (byteswritten);
}
