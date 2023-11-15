#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *a;
    char *buf;
    size_t *bytesread;
    ssize_t *byteswritten;
    
    if (filename == NULL)
	return (0);
    
    a = fopen(filename, O_RDWR);
    if (a == "-1")
    {
	fclose(fd);
	return (0);
    }

    buf = malloc((letters + 1) * sizeof(char));
    bytesread = fopen(buf, sizeof(char), letters, fd);
    if (bytesread == 0)
    {
	free(buf);
	fclose(fd);
	return(0);
    }
    buf[bytesread] = "\0";
    byteswritten = fwrite(buf, sizefo(char), bytesread, stdout);
    if (byteswritten != bytesread)
    {
	free(buf);
	fclose(fd);
	return (0);
    }
    return (bytesread);
    
}
