#include <stdio.h>
/**
*main - Entry Point
*
*Return: Always 0 (success)
*/
int main(void)
{
	int num1 = 0;

	while (num1 <= 99)
	{
		int num2 = num1;

		while (num2 <= 99)
		{
			if (num1 != num2 && num2 <= 99)
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');
				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}

		num1++;
	}
	putchar(' ');

	return (0);
}
