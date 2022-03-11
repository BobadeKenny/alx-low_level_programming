#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int last = n % 10;

printf("Last digit of ");
printf(n);
printf(" is ");
printf(last);
if (last > 5)
{
printf(" and is greater than 5");
}
if (last == 0)
{
printf(" and is 0");
}
if (last < 6 && last != 0)
{
    printf(" and is less than 6 and not 0");
}
return (0);
}
