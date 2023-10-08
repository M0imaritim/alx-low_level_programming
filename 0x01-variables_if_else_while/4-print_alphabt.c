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

	while (lower <= 'z')
	{
		if (lower != 'e' && lower != 'q')
		{
			putchar(lower);
		}

		lower++;
	}

	putchar('\n');

	return (0);
}
