#include "main.h"
#include <stdio.h>
/**
 *puts_half - prints half the string's length
 *@str: the string to be printed
 *
 */
void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	if (str == NULL)
	{
		return;
	}
	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			break;
		}
		i++;
	}
	if (i % 2 == 1)
	{
		len = i / 2;
	}
	else
	{
		len = (i - 1) / 2;
	}
	for (len++; len < i; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');

}
