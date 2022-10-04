#include "search_algos.h"
/**
 * binary_search - searches for a value in an
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array
 * @value: value to search for
 * @size: number of elements in array
 * Return: index of value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	do
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");
		
		mid = (left + right)/2;
		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			right = mid - 1;
		}
		else {
			return (mid);
		}
	} while (left <= right);
	
	return (-1);
}
