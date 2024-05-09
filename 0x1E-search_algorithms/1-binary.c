#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: pointer to the of the array
 * @size: number of elements in the array
 * @value: value to search for
 * Return: index where the value is llocated
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid;
	size_t start = 0;
	size_t end = size - 1;

	if (array == NULL || size <= 0)
		return (-1);
	while (end >= start)
	{
		printf("Searching in array: ");
		for (mid = start; mid < end; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = start + (end - start) / 2;
		if (array[mid] < value)
			start = mid + 1;
		else if (array[mid] > value)
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
