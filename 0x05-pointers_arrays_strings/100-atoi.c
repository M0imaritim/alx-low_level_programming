#include "main.h"
#include <limits.h>
/**
 * _atoi - Convert a string to an integer.
 * @s: The input string.
 *
 * Return: The integer value of the string,
 * or 0 if no valid integer is * found.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] == ' ' || s[i] == '\t')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > INT_MAX / 10 ||
		    (result == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10))
		{
			if (sign == 1)
			{
				return (INT_MAX);
			}
			else
			{
				return (INT_MIN);
			}
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}
	return (result * sign);
}
