#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: parameter name
 * Return: always 0 (success)
 */
int print_last_digit(int num)
{
	int last;

	if (num > 0)
	{
		last = num % 10;
	}
	else if (num < 0)
	{
		last = (-num % 10);
	}
	_putchar('0' + last);
	return (0);
}
