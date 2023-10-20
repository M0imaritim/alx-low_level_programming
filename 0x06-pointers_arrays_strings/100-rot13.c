#include "main.h"
/**
 * rot13 - Encodes a string using ROT13.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		char is_lower = (*ptr >= 'a' && *ptr <= 'z');
		char is_upper = (*ptr >= 'A' && *ptr <= 'Z');
		char shift = is_lower ? 'a' : is_upper ? 'A' : 0;

		if (is_lower || is_upper)
		{
			*ptr = (is_lower ? 'a' : 'A') +
				((*ptr - shift + 13) % 26);
		}

		ptr++;
	}

	return (str);
}
