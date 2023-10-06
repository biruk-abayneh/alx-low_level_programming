#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory to array
 * @nmemb: number of elements of the array
 * @size: size of each element
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

ptr = malloc(nmemb * size);
if (ptr == NULL)
	return (NULL);
if ((nmemb = 0) || (size == 0))
	return (NULL);
return (ptr);
}
