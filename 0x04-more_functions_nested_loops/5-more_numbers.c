#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14, ten times
 */
void more_numbers(void)
{
	int num;
	int i;

	for (num = 0; num < 10; num++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
			{
				_putchar('0' + (i / 10));
			}
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
	}
}
