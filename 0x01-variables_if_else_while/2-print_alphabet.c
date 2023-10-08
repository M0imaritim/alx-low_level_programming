#include <stdio.h>
/**
*main - Entry point
*Description: A program that prints all alphabeth letters in lower case
*Return: always 0(successs)
*/

int main(void)
{
	char Lowercase = 'a';

	while (Lowercase <= 'z')
	{
		putchar(Lowercase);
		Lowercase++;
	}
	putchar(\n);

	return (0);

}
