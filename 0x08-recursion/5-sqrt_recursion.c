#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square rooot is being sought
 *
 * Return: natural square root
 *
 */
int _sqrt_recursion(int n)
{
	return (sqr00t(n, 1));
}
/**
 * sqr00t - recursive helper function to find the square root
 * @n: the number whose square root is to be found
 * @s: current guess for the square root
 *
 * Return: the natural square root of n or -1 if not found
 */
int sqr00t(int n, int s)
{
	int square = s * s;

	if (square == n)
	{
		return (s);
	}
	else if (square < n)
	{
		return (sqr00t(n, s + 1));
	}
	else
	{
		return (-1);
	}
}
