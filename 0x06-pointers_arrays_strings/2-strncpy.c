#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - copies a string
 * @dest: the first string that the second string will be appended to
 * @src: the source string to be copied
 * @n: maximum number of characters to copy
 * Return: returns a pointer to the new string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;
	char *dest_new = dest;

	if (dest_new == NULL || src == NULL)
	{
		return (NULL);
	}
	while (j < n && src[j] != '\0')
	{
		dest_new[j] = src[j];
		j++;
	}
	for ( ; j < n; j++)
	{
		dest_new[j] = '\0';
	}
	return (dest);
}
