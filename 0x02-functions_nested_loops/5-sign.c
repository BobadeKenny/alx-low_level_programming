#include "main.h"

/**
 * print_sign - Entry point
 * @n : number to check the sign
 * Return:0 or 1 or -1
 */
int print_sign(int n)
{
int r;

if (n > 0)
{
_putchar('+');
r = 1;
}
if (n == 0)
{
_putchar('0');
r = 0;
}
if (n < 0)
{
_putchar('-');
r = -1;
}
return (r);
}
