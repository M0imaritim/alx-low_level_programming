#include  <stdio.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to binary characters
 * Return: converted number or 0 if b contains non binary char or b is NULL
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		num = (num << 1) | (*b - '0');
		b++;
	}
	return (num);
}