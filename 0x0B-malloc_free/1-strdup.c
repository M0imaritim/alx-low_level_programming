#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 *
 * Return: pointer to the duplicated string
 *
 */
char *_strdup(char *str)
{
	size_t len;
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
        len = strlen(str);
	new_str = (char *)malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}
	strcpy(new_str, str);
	return (new_str);
}
