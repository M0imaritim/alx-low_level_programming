#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to the buffer pointed to by dest
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
	if (dest == NULL || src == NULL)
	{
		return NULL;
	}

	char *dest_orig = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return dest_orig;
}
