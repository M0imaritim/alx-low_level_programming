#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array using Jump Search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    size_t step = sqrt(size);
    size_t prev = 0, i;

    // Finding the block where value might be present
    while (prev < size && array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev += step;
    }

    size_t start = prev > step ? prev - step : 0;
    size_t end = prev < size ? prev : size - 1; // Fix: Correct boundary

    printf("Value found between indexes [%lu] and [%lu]\n", start, end);

    // Performing linear search in the identified block
    for (i = start; i <= end; i++) // Fix: Inclusive search within range
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}
