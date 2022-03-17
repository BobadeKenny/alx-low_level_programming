#include "main.h"

/**
 * more_numbers - Entry point
 * Return:0
 */
void more_numbers(void)
{
	int c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
