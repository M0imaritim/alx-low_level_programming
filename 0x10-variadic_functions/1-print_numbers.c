#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	if (separator == NULL)
	{
		separator = "";
	}

	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
