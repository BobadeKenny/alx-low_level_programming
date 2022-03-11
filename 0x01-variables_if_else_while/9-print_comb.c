#include <stdio.h>

/**
 * main - This is the entry point of the project
 *
 * Return: always 0
 */

int main(void)
{
char a;

for (a = '0'; a <= '9'; a++)
{
if (a == 9)
{
putchar(a);
}
else 
{
putchar(a);
putchar(',');
putchar(' ');
}    
}
return (0);
}
