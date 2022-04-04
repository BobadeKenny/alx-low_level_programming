#include <stdio.h>

/**
 * main - prints program name, followed by a new line
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf(argv[i]);
		printf("\n");
	}
	return (0);
}
