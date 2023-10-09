#include <stdio.h>
/**
*main - Entry point
*Description: Prints all possible combinations of single digits
*Return: Always 0 (success)
*/
int main(void)
{
	int digi = 0;

	while (digi < 10)
	{
		putchar('0' + digi);
		if (digi < 9)
		{
			putchar(',');
			putchar(' ');
		}
		digi++;
	}
	putchar('\n');
	return (0);
}
