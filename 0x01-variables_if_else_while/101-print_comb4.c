#include <stdio.h>
/**
*main - entry point
*
*Return: Always 0 (success)
*/

int main(void) {
	int digit1 = 0;

	while (digit1 <= 9) {
		int digit2 = 0;

		while (digit2 <= 9) {
			int digit3 = 0;

			while (digit3 <= 9)
			{
				if (digit1 != digit2 && digit1 != digit3 && digit2 != digit3)
				{
					putchar('0' + digit1);
					putchar('0' + digit2);
					putchar('0' + digit3);

					if (digit1 != 9 || digit2 != 8 || digit3 != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				digit3++;
			}

			digit2++;
		}

		digit1++;
	}

	putchar('\n');

	return (0);
}
