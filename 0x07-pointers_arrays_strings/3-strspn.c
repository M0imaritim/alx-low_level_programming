#include "main.h"
#include <stdio.h>
/**
 * _strspn -mgets the lenght of a prefix substring
 * @s: pointer to the initial segment
 * @accept: pointer to number of bytes
 * Return: number of initial bytes
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int byte_number = 0;

	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				byte_number++;
				break;
			}
		a++;
	}
	if (*a == '\0')
	{
		break;
	}
	s++;
	}
	return (byte_number);
}
