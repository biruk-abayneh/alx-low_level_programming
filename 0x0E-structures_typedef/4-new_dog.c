#include <stdlib.h>
#include <stdio.h>
#include "dog.h"


/**
 * _strlen - Calculate the length of a string
 * @str: The input string
 * Return: The length of the string
 */

int _strlen(const char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
 * _strcpy - Copy a string from source to destination
 * @dest: The destination buffer
 * @src: The source string
 * Return: Pointer to the destination buffer
 */

char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}


/**
 * *new_dog - creates new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: struct of new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *new_dog = (dog_t *)malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);


new_dog->name = (char *)malloc(_strlen(name) + 1);
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}
_strcpy(new_dog->name, name);

new_dog->owner = (char *)malloc(_strlen(owner) + 1);
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
_strcpy(new_dog->owner, owner);


new_dog->age = age;

return (new_dog);
}

