#include "main.h"
/**
 * leet - Encodes a string into 1337 speak.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr == 'a' || *ptr == 'A')
			*ptr = '4';
		else if (*ptr == 'e' || *ptr == 'E')
			*ptr = '3';
		else if (*ptr == 'o' || *ptr == 'O')
			*ptr = '0';
		else if (*ptr == 't' || *ptr == 'T')
			*ptr = '7';
		else if (*ptr == 'l' || *ptr == 'L')
			*ptr = '1';
		ptr++;
	}

	return (str);
}
