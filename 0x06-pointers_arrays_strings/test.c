#include <stdio.h>

int main(void)
{
    char *a[];
    int i;

    a = "Hello ";
    for (i = 0; a[i] != '\0'; i++)
    {
	printf("start for loop\n");
	if ('a' < a[i] < 'z')
	{
	    a[i] = a[i] + 32;
	}
    }
    printf("%s\n", a);
    return (0);
}
