#include "main.h"

/**
 * is_prime_number - checks if a number is prime using recursion
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_recursive(n, n - 1));
}

/**
 * prime_recursive - recursive helper function to check if a number is prime
 * @n: the integer to check
 * @divisor: the divisor to test
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int prime_recursive(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (prime_recursive(n, divisor - 1));
}
