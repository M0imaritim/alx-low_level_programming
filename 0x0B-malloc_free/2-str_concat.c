#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: A pointer to the concatenated string or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}
	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; s2[j]; j++, i++)
	{
		concat[i] = s2[j];
	}
	concat[i] = '\0';

	return (concat);
}
