#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: the arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int x = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", x);
	return (0);
}
