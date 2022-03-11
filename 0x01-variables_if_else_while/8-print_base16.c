#include <stdio.h>

/**
 * main - This is the entry point of the project
 *
 * Return: always 0
 */

int main(void)
{
    int a;
    for (a = 0; a <= 16; a++)
    {
        putchar('%X', a);
    }
    return (0);
}
