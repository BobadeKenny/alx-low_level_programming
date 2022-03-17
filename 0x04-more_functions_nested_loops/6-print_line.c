#include "main.h"

/**
 * print_line - Entry point
 * @n : num to print
 * Return:0 or 1
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
