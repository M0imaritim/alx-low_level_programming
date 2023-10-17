#include "main.h"
#include <stdio.h>

/**
 * puts2 - Prints every other character of a string
 * @str: The input string
 */
void puts2(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return;
	}

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
