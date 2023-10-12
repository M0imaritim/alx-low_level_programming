#include "main.h"
#include <stdio.h>
/**
 * _abs - prints the absolute value of a number
 *
 * @n: parameter value
 * Return: always 0(success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	return (n);
}
