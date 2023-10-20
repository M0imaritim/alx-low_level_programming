#include "main.h"
/**
 * cap_string - Capitalizes all words in a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			if (ptr == str || (
				   *(ptr - 1) == ' ' || *(ptr - 1) == '\t' ||
				   *(ptr - 1) == '\n' ||
				   *(ptr - 1) == ',' || *(ptr - 1) == ';' ||
				   *(ptr - 1) == '.' || *(ptr - 1) == '!' ||
				   *(ptr - 1) == '?' || *(ptr - 1) == '"' ||
				   *(ptr - 1) == '(' || *(ptr - 1) == ')' ||
				   *(ptr - 1) == '{' || *(ptr - 1) == '}'))
			{
				*ptr -= 32;
			}
		}
		ptr++;
	}

	return (str);
}
