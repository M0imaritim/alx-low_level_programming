#include "main.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: character
 * @b: constant byte
 * @n: bytes
 * Return: pointer to memory  area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j = 0;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	return (s);
}
