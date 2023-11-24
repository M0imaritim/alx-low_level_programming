#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: unsigned long int
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mask > 0)
	{
		if ((n & mask) == 0 && flag == 0)
		{
		}
		else
		{
			_putchar((n & mask) ? '1' : '0');
			flag = 1;
		}

		mask >>= 1;
	}
}
