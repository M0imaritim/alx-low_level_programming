#include "main.h"

/**
 * _isalpha - checks if character is a letter either lowercase or uppercase
 *
 *@c - passes parameter type
 *
 * Return: 1 if character is a letter or 0 if otherwise.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >=97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0)
	}
	return (0);
}
