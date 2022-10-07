#include "search_algos.h"
/**
 * interpolation_search - searches for a value in an
 * array of integers using the Interpolation search algorithm
 * @array: pointer to the first element of the array
 * @value: value to search for
 * @size: number of elements in array
 * Return: index of value
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}
	while ((array[high] != array[low]) && (value >= array[low]) &&
	(value <= array[high]))
	{
		mid = low + ((value - array[low]) * (high - low)) /
		(array[high] - array[low]);
		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
		{
			low = mid + 1;
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	printf("Value checked array[%ld] is out of range\n", high);
	return (-1);
}
