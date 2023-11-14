#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main()
{
    int i, stat;
    char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
    char *envp[] = {NULL};
    pid_t pid;

    for (i = 0; i < 5; i++)
    {
	pid = fork();
	if (pid == -1)
	{
	    perror("Error");
	    exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
	    if (execve(argv[0], argv, envp) == -1)
	    {
		perror("Error in exec");
		exit(EXIT_FAILURE);
	    }
	}
	else
	    wait(&stat);
    }
    return (0);
}
