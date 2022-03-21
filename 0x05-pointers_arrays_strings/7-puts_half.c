#include "main.h"
/**
 * puts_half - print to stdout
 * @str: var 1
 * Return:void
 */
void puts_half(char *str)
{
	int j;
	int i = 0;
	while (str[i])
	{
		i++;
	}
	for (j = 0; j <= (i / 2); j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
