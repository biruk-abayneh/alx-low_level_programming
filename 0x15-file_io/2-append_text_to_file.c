#include "main.h"
#include <sys/stat.h>
/**
 * append_text_to_file - it adds a specified text to text file
 * @filename: file to add text on
 * @text_content: text to add t a file
 * Return: 1(SUCCESS) -1(FAIL)
 */

int append_text_to_file(const char *filename, char *text_content)
{
int len, x, fd;
struct stat info;

if (filename == NULL)
	return (-1);
if (text_content == NULL)
{
	if (stat(filename, &info) == 0)
	return (1);
	else if (stat(filename, &info) != 0 || info.st_mode & S_IWUSR)
	return (-1);
}
len = 0;
while (text_content[len])
{
	len++;
}
fd = open(filename, O_EXCL | O_WRONLY | O_APPEND);
x = write(fd, text_content, len);
if (fd == -1 || x == -1)
	return (-1);
return (1);
}
