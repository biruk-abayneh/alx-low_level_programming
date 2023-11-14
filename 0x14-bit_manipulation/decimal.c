#include "main.h"

unsigned int binary_to_uint(const char *b)
{
    unsigned int i = 0, dec = 0;

    if (b == NULL)
	return (0);
    while (b[i] != '\0')
    {
	printf("B[i] = %c\n", b[i]);
	if (b[i] != '0' && b[i] != '1')
	    return (0);
	dec <<= 1;
	if (b[i] == '1')
	    dec += 1;
	printf("dec = %d\n", dec);
	i++;
    }
    return (dec);
}

    
    
