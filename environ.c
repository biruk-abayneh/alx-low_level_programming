#include <stdio.h>
#include <unistd.h>

extern char **environ;

int main()
{
    int i;

    for (i = 0; environ[i] != NULL; i++)
    {
	printf("Environ[%d]: %s\n", i, environ[i]);
    }
    return (0);
}

