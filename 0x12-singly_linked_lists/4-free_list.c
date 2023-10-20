#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_list - free the memory occupied by list
* @head: pointer to the first node of a lsit
*/

void free_list(list_t *head)
{
   if (head)
   {
       free_list(head->next);
       if (head->str)
       free(head->str);
       free(head);
   }
}
