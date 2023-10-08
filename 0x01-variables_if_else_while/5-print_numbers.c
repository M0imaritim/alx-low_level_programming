#include <stdio.h>
/**
*main - Entry point
*Description: Aprogram to print all single digits of base 10
*Return: alway 0 (success)
*/
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
