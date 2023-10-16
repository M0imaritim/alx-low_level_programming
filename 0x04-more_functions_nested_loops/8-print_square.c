#include "main.h"
/**
 * print_square - Prints a square, followed by a new line
 * @size: size of square
 *
 */
void print_square(int size)
{
	int i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; (i < size); i++)
		{
			int j;

			for (j = 0; (j < size); j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
