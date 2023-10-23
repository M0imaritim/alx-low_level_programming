#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: poimter to destination memory area
 * @src: pointer to source memory area
 * @n: number of bytes to be copied
 * Return: pointer to dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;
	char *new_dest = dest;

	for (j = 0; j < n; j++)
	{
		new_dest[j] = src[j];
		new_dest++;
	}
	return (dest);
}
