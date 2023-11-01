#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * argstostr - concatenates all arguments of the program
 * @ac: argument count
 * @av: the arguments
 * Return: pointer to the new string
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int totalLength;
	char *new_str;
	int currentIndex;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	totalLength = 0;

	for (i = 0; i < ac; i++)
	{
		totalLength += strlen(av[i]) + 1;
	}

	new_str = (char *)malloc((totalLength + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}

	currentIndex = 0;

	for (i = 0; i < ac; i++)
	{
		strcpy(new_str + currentIndex, av[i]);
		currentIndex += strlen(av[i]);
		new_str[currentIndex] = '\n';
		currentIndex++;
	}

	return (new_str);
}
