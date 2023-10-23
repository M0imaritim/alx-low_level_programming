#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination where the bytes will be pointed to
 * @src: source where the bytes will be copied from
 * @n: number of bytes to be copied
 * Return: pointer to dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	for (j = 0; j < n; j++)
	{
		src[j] = dest[j];
	}
	return (dest);
}
