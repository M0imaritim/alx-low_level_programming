#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to locate
 * Return: pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *sub, *search;

	if (*needle == '\0')
		return haystack;

	while (*haystack)
	{
		search = haystack;
		sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (!*sub)
			return (search);

		haystack = search + 1;
	}

	return (NULL);
}
