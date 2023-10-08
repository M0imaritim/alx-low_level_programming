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

	while (lower < 'e' && lower < 'q' && lower <= 'z')
	{
		putchar(lower);
		lower++;
	}


	
	putchar('\n');

	return (0);
}
