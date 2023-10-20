#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* _strlen_2 - returns the length of a string
* @str: string
* Return: length of string
*/
unsigned int _strlen_2(char *str)
{
unsigned int i;


for (i = 0; str[i]; i++)
;
return (i);
}


/**
* add_node_end - adds a new node at end of a list
* @head: double pointer to head of list
* @str: string to be added at the end
* Return: pointer to a new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *a, *b;


if (str == NULL)
return (NULL);
a = malloc(sizeof(list_t));
if (a == NULL)
return (NULL);
a->str = strdup(str);
if (a->str == NULL)
{
free(a);
return (NULL);
}
a->len = _strlen_2(a->str);
a->next = NULL;
if (*head == NULL)
{
*head = a;
return (a);
}
b = *head;
while (b->next)
b = b->next;
b->next = a;
return (a);
}
