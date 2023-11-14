#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *input = NULL;
    size_t inputsize = 0;

    while (1)
    {
	    printf("$ ");
	    fflush(stdout);

	ssize_t out = getline(&input, &inputsize, stdin);
	if (out == -1)
	    break;
	printf("%s\n", input);
    }
    free(input);
    return (0);
}
