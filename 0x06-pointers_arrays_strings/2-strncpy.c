#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - copies a string
 * @dest: the first string that the second string will be appended to
 * @src: the second string that is copied to the first string
 * @n: integer
 * Return: returns the new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
	char *dest_new = dest;

	if (dest_new == NULL || src == NULL)
	{
		return (NULL);
	}
	while (j <= n && src[j] != '\0')
	{
		dest_new[j] = src[j];
		j++;
	}
	dest_new[j] = '\0';
	return (dest);
}
