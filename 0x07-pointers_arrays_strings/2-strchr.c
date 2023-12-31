#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a char in a string
 * @s: pointer to the string to be searched
 * @c: first occurence of the character
 * Return: a pointer to the first occurrence of the character
 *
 */
char *_strchr(char *s, char c)
{
	int j = 0;

	while (s[j] && s[j] != c)
	{
		j++;
	}
	if (s[j] == c)
	{
		return (&s[j]);
	}
	else
	{
		return (NULL);
	}
}
