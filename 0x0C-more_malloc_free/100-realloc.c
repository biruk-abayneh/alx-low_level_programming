#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: old pointer
 * @old_size: size of old pointer
 * @new_size: size of new pointer
 * Return: new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int i;
char *new_ptr, *old_ptr;

if (ptr == NULL)
	return (malloc(new_size));
if (new_size == 0 && ptr)
{
	free(ptr);
	return (NULL);
}
if (new_size == old_size)
	return (ptr);
new_ptr = malloc(new_size);
if (!new_ptr)
	return (NULL);
old_ptr = ptr;
if (new_size < old_size)
{
	for (i = 0; i < new_size; i++)
	{
	new_ptr[i] = old_ptr[i];
	}
}
else if (new_size > old_size)
{
	for (i = 0; i < old_size; i++)
	{
	new_ptr[i] = old_ptr[i];
	}
}

free(ptr);
return (new_ptr);
}

