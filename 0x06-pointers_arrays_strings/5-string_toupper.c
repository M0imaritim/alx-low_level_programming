#include "main.h"
#include <stdio.h>
/**
 * string_toupper - Changes all lowercase letters in a string to uppercase.
 * @str: The input string to be modified.
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}

	return (str);
}
