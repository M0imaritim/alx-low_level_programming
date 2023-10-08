#include <stdio.h>
/**
*main - Entry point
*Description: A program to print all single digit numbers of base 10
*Return: always 0 (success)
*
*/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
