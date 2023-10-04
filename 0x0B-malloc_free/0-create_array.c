#include <stdlib.h>

/**
 * create_array - create an array of characters
 * @size: size of the array
 * @c: string to enter the array
 * Return: array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
