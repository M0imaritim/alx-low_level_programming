#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: the arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		if (*argv[i] != '\0')
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
