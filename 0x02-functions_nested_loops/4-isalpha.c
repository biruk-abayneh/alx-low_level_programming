#include "main.h"
/**
 * _isalpha - check lowercase or uppercase
 *@c: charachter to check
 *Return: either 1 or 0
 */

int _isalpha(int c)
{
int condtion1 = (c >= 'a' && c <= 'z');
int condtion2 = (c >= 'A' && c <= 'Z');
if (condtion1 || condtion2);
{
return (1);
}
else
{
return (0);
}
}
