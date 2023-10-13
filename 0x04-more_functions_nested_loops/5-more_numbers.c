#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14, ten times
 */
void more_numbers(void)
{
	int i;
	char number;

	for (i = 0; i < 10; i++)
	{
		for (number = '0'; number <= '9'; number++)
		{
			_putchar(number);
		}
		for (number = '0'; number <= '4'; number++)
		{
			_putchar(number);
		}
		_putchar('\n');
	}
}
