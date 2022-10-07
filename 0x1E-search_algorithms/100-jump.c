#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in an
 * array of integers using the jump search algorithm
 * @array: pointer to the first element of the array
 * @value: value to search for
 * @size: number of elements in array
 * Return: index of value
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0;
	size_t b = sqrt(size);

	if (array == NULL)
	{
		return (-1);
	}
	while (array[(int)fmin(b,size) - 1] < value)
	{
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a = b;
		b += sqrt(size);
		if (a >= size)
		{
			return (-1);
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", a, b);
	while (array[a] < value)
	{
	printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a = a + 1;
		if (a == (int)fmin(b, size))
		{
			return (-1);
		}
	}
	if (array[a] == value)
	{
		return (a);
	}
	return (-1);
}