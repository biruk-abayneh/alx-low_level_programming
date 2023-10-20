#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "main.h"

/**
* _strlen - returns the length of string
* @s : string
* Return: length of string
*/

int _strlen(const char *s)
{
   int i = 0;


   while (s[i] != '\0')
   {
       i++;
   }
   return (i);
}


/**
* add_node - adds a new node at the beginning of list
* @head: start of the list
* @str: new value to be added
* Return: the length of nodes.
*/

list_t *add_node(list_t **head, const char *str)
{
   list_t *a;


   a = malloc(sizeof(list_t));
   if (a == NULL)
       return (NULL);
   a->str = strdup(str);


   a->len = _strlen(str);
   a->next = *head;
   *head = a;


   return (a);
}
