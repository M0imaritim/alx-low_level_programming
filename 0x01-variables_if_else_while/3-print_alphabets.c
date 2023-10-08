#include <stdio.h>
/**
*main - Entry point
*
*Description: A program that prints the alphabeth in lower case
*then in upper case.
*
*Return: always 0(success)
*/

int main(void)
{
	char Upper = 'A';
	char lower = 'a';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (Upper <= 'Z')
	{
		putchar(Upper);
		Upper++;
	}
	putchar('\n');
	return (0);

}
