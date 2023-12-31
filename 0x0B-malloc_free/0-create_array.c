#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it
 * with a specific char
 * @size: size of the array
 * @c: character for initialization
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
