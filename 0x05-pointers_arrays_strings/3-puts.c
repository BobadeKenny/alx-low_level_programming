#include "main.h"
/**
 * _puts - print to stdout
 * @str: var 1
 * Return:void
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
