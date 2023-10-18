#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatnates two strings
 * @dest: first string
 * @src: second string
 * Return: returns a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *dest_new = dest;
	int j = 0;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	while (*dest_new != '\0')
	{
		dest_new++;
	}
	while (src[j] != '\0')
	{
		*dest_new = src[j];
		dest_new++;
		j++;
	}
	*dest_new = '\0';

	return (dest);
}
