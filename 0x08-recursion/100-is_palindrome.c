#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length <= 1)
	{
		return (1);
	}

	return (check_palindrome(s, 0, length - 1));
}

/**
 * check_palindrome - recursive helper function to check for a palindrome
 * @s: the string to check
 * @start: the starting index
 * @end: the ending index
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (check_palindrome(s, start + 1, end - 1));
}

/**
 * _strlen - returns the length of a string
 * @s: the input string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	if (s[length] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}
