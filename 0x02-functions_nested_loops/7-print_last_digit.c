#include "main.h"
/**
 * print_last_digit - return last digit
 * @n : number
 * Return:0 or 1
 */

int print_last_digit(int n)
{
int d;

if (n < 0)
	d = -1 * (n % 10);
else
	d = n % 10;

_putchar(d + '0');
return (d);
}
