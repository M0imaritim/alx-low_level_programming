#include "main.h"
#include <stdio.h>
/**
 * leet - Encodes a string into 1337 speak.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *leet_replace = "aAeEoOtTlL";
	char *leet_with = "443370711";
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		int j = 0;

		for (j = 0; leet_replace[j] != '\0'; j++)
		{
			if (str[i] == leet_replace[j])
			{
				str[i] = leet_with[j];
				break;
			}
		}
	}
	return (str);
}
