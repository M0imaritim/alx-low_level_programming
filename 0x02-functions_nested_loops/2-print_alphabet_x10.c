#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lower case ten times
 *
 * Return: Void.
 */
void print_alphabet_x10(void)
{
	char c ='a';
	int ten;
	ten = 0;

	while (ten <= 10)
	{
		while (c <= 'z')
		{
			_putchar('c');
			c++;
		}
	}
	_putchar('\n');
	ten++;
}
