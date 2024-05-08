#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: points to the first element in the list
 * @size: number of elements in the list
 * @value: the value to search for
 * Return: 1 if value is present or -1 if araay is empty
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
