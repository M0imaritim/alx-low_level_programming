#include <stdio.h>
/**
 * main - prints thenumber of arguments passed into it
 * @argc: number of arguments
 * @argv: the arguments
 * Return: always o (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
