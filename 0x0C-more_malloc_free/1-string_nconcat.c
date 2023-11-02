#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes to be allocated
 * Return: pointer to newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	int len1 = 0, i, j;
	unsigned int len2 = 0;

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
	if (n >= len2)
	{
		n = len2;
	}
	new_str = (char *)malloc(sizeof(char) * (len1 + n + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		new_str[i] = s1[i];
	}
	for (j = 0; s2[j]; j++,i++)
	{
		new_str[i] = s2[j];
	}
	new_str[i] = '\0';
	return (new_str);
}
