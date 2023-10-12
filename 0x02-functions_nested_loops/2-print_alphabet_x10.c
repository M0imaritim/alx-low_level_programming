#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower case ten times
 *
 * Return: Void.
 */
void print_alphabet_x10(void)
{
	int ten = 0;
	char c;

	while (ten <= 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
			_putchar('\n');
		}
	}
	ten++;
}
