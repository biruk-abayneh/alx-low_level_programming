#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - calls other print functions
 * @name: name to print
 * @f: function to call
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
