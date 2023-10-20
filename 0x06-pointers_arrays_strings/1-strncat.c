#include "main.h"
#include <stdio.h>
/**
* _strncat - concatnates two strings
* @dest: the first string that the second string will be appended to
* @src: the second string to be appended to the first
* @n: the maximum characters to be appended
* Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int j = 0;
	int dest_len = 0;
	int src_len = 0;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_len] != '\0')
	{
		src_len++;
	}
	while (j < n && j < src_len)
	{
		dest[dest_len + j] = src[j];
		j++;
	}
	dest_len += j;
	if (src_len > n)
	{
		dest[dest_len + j] = '\n';
	}
	return (dest);
}
