#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	const char *j;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		j = va_arg(args, const char *);

		if (j == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", j);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
