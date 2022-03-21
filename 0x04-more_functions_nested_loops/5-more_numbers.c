#include "main.h"

/**
 * more_numbers - Entry point
 * Return:0
 */
void more_numbers(void)
{
int i;
int c;

for (i = 0; i <= 9; i++)
{
for (c = 0; c <= 14; c++)
{
_putchar('0' + c);
}
_putchar('\n');
}
_putchar('\n');
}
