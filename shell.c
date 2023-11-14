#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>

/*
 * main - simple shell
 * Return - 0(success)
 */

int main()
{
    char *command = NULL;
    char *argv[2];
    char *envp[] = {NULL};
    size_t inputsize = 0;
    struct stat filestat;
    
    
    while (1)
    {
	printf("$ ");
	fflush(stdout);
	ssize_t x = getline(&command, &inputsize, stdin);
	if (x == -1)
	{
	    break;
	}
	command[strcspn(command, "\n")] = '\0';
	argv[0] = strtok(command, " ");
	argv[1] = NULL;
	pid_t pid = fork();
	if (pid == -1)
	{
	    perror("Error in fork");
	    exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
	    if(stat(argv[0], &filestat) != -1)
	    {
		if((execve(argv[0], argv, envp)) == -1)
		{
		    perror("Error in execve");
		    exit(EXIT_FAILURE);
		}
	    }
	    else if (stat(argv[0], &filestat) == -1)
	    {
		printf("%s: ", argv[0]);
		perror("Not found");
		exit(EXIT_FAILURE);
	    }
	}
	else       
	    wait(NULL);
    }
    return (0);
}

	
    
