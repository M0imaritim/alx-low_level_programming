#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set bytes
 * @s: pointer to the byte in string be searched
 * @accept: pointer to the bytes of characters to search for
 * Return: pointer to bytes in s or NULL if not found
 *
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}

	return (NULL);
}
