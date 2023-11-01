#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the minimum number of coins to make change for an amount
 * of money
 * @argc: number of arguments
 * @argv: the arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int coin_val[5] = {25, 10, 5, 2, 1};
	int i, cents, totalCoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}

	totalCoins = 0;

	for (i = 0; i < 5; i++)
	{
		while (cents >= coin_val[i])
		{
			cents -= coin_val[i];
			totalCoins++;
		}
	}

	printf("%d\n", totalCoins);

	return (0);
}
