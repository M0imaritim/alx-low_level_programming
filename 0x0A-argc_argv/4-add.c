#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: the arguments
 * Return: always 0 (success)
 *
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 0;

	for (i = 1; i < argc; i++)
	{
		int j = 0;

		if (argc <= 1)
		{
			printf("0\n");
		}

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
