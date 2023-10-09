#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0(success)
*/
int main(void)
{
	int tensDigit = 0;

	while (tensDigit <= 9)
	{
		int onesDigit = tensDigit + 1;

		while (onesDigit <= 9)
		{
			putchar('0' + tensDigit);
			putchar('0' + onesDigit);
			putchar(',');
			putchar(' ');
			onesDigit++;
		}

		tensDigit++;
	}

	putchar('\n');

	return (0);
}
