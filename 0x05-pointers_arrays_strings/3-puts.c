#include "main.h"
#include <stdio.h>
/**
* _puts - prints a string followed by a new line to stout
* @str: string to be printed
*
*
*/
void _puts(char *str)
{
	/*int j = *str;*/

	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
