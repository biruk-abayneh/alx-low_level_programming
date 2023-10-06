#include "main.h"
#include <stdlib.h>

/**
 * *array_range - create an array from the number
 * min to max
 * @min: minimum number
 * @max: maximum number
 * Return: pointer to an array
 */

int *array_range(int min, int max)
{
int *ptr, j, i;

if (min > max)
	return(NULL);
ptr = malloc(sizeof(int) * (max - min + 1));
if (ptr == NULL)
	return (NULL);
j = 0;
for (i = min; i <= max; i++)
{
	ptr[j] = i;
	j++;
}
return (ptr);
}

