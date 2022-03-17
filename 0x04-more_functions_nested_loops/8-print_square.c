#include "main.h"

/**
 * print_diagonal - Entry point
 * @size : num to print
 * Return:0 or 1
 */
void print_diagonal(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
		_putchar('#');
		}
	_putchar('\n');
	}
	_putchar('\n');
}
