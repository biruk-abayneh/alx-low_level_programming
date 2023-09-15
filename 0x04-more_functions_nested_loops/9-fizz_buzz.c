#include <stdio.h>
#include "main.h"
/**
 * main - FizzBuzz
 * Return: 0 and exit
 */

int main(void)
{
int i;

for (i = 0; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
printf("Fizz\n");
else if (i % 3 != 0 && i % 5 == 0)
printf("Buzz\n");
else if (i % 3 == 0 && i % 5 == 0)
printf("FizzBuzz\n");
else
printf("%d\n", i);
}
return (0);

}
