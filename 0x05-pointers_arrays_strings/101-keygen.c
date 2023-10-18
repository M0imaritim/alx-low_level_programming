#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * generateRandomCharacter - Generates a random lowercase character
 * between 'a' and 'z'.
 *
 * Return: A randomly generated lowercase character.
 */

char generateRandomCharacter()
{
	return ('a' + rand() % 26);
}
/**
 * main - Entry point for the random password generator program.
 *
 * Return: 0 on success.
 */

int main()
{
	srand(time(NULL));
	int passwordLength = 10;

	printf("Random Password: ");
	for (int i = 0; i < passwordLength; i++)
	{
		printf("%c", generateRandomCharacter());
	}
	printf("\n");

	return (0);
}
