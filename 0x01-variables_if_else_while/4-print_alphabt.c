#include <stdio.h>
/**
*main - Entry point
*Description: Prints all letters except e and q in lower case
*
*
*Return: always 0 (success)
*/

int main(void)
{
	char lower = 'a';
	char upper = 'r';

	while (lower < 'e' && lower < 'q')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}
