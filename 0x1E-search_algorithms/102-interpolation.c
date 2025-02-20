#include <stdio.h>

/**
 * interpolation_search - Searches for a value in a sorted array using
 *                        the Interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t low, high, pos;

    if (!array || size == 0)
        return (-1);

    low = 0;
    high = size - 1;

    while (low <= high && value >= array[low] && value <= array[high])
    {
        /* Avoid division by zero */
        if (array[high] == array[low])
            break;

        /* Compute the probe position */
        pos = low + (((double)(high - low) /
                      (array[high] - array[low])) *
                     (value - array[low]));

        if (pos >= size)
        {
            printf("Value checked array[%lu] is out of range\n", pos);
            break;
        }

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return (pos);

        if (array[pos] < value)
            low = pos + 1;
        else
            high = pos - 1;
    }

    return (-1);
}
