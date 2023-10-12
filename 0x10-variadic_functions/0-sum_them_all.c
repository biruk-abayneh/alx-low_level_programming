#include "main.h"

void printInt(unsigned int num)
{
    char digits[10]; /* Maximum number of digits in an int */
    int i = 0;
    if (num == 0)
	{
		_putchar('0');
		return;
	}

	while (num > 0)
	{
		digits[i++] = num % 10 + '0'; /* Convert digit to character representation */
		num /= 10;
	}

	while (i > 0)
	{
		_putchar(digits[--i]);
	}
}

int sum_them_all(const unsigned int n, ...)
{
    va_list const unsigned int num;
    unsigned int i, sum;

    sum = 0;
    va_start(num, n);
    for (i = n; i >= 0; i = va_arg(num, const unsigned int))
    {
	sum = sum + i;
    }
    printInt(sum);
}
