#include <stdio.h>
/**
*main - Entry point
*Description: this program prints the alphabet in reverse
*Return: Always 0(success)
*/
int main(void)
{
	char lower = 'z';

	while (lower >= 'a')
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');
	return (0);
}
