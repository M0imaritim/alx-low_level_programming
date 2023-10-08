#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Determine if  greater than 5 or less than 6 or is 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, p;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	p = n % 10;

/* your code goes there */

	if (p > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, p);
	}
	else if (p == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, p);
	}
	else if (p < 6 && p != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, p);
	}
	return (0);
}
