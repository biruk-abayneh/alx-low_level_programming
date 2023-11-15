#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *a;
    char *buf;
    size_t bytesread;
    ssize_t byteswritten;
    
    if (filename == NULL)
	return (0);
    
    a = fopen(filename, "r");
    if (a == NULL)
    {
	fclose(a);
	return (0);
    }

    buf = malloc((letters + 1) * sizeof(char));
    bytesread = fread(buf, sizeof(char), letters, a);
    if (bytesread == 0)
    {
	fclose(a);
	free(buf);
	return(0);
    }
    buf[bytesread] = '\0';
    byteswritten = fwrite(buf, sizeof(char), bytesread, stdout);

    fclose(a);
    return (byteswritten);
    
}
