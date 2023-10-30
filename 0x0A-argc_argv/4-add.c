#include <stdlib.h>
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
		if (argc <= 1)
		{
			printf("0");
		}
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
