#include "main.h"

/**
 * swap_int - swap a and b
 * @a: value a
 * @b: value b
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
