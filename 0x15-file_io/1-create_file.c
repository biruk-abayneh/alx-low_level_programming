#include "main.h"

/**
 * create_file - creates a file with contents specified by
 * the user
 * @filename: name of the file to create
 * @text_content: contents to write in the file
 * Return: 1(SUCCESS) & -1(FAIL)
 */

int create_file(const char *filename, char *text_content)
{
int fd, len;
ssize_t x;

if (filename == NULL)
	return (-1);
len = 0;
while (text_content[len])
{
	len++;
}

fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
x = write(fd, text_content, len);
if (fd == -1 || x == -1)
	return (-1);
close(fd);
return (1);
}
