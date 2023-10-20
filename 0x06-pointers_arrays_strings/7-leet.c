/**
 * leet - Encodes a string into 1337 speak.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *leet(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		char leet_replacement = 0;

		if (*ptr == 'a' || *ptr == 'A')
			leet_replacement = '4';
		else if (*ptr == 'e' || *ptr == 'E')
			leet_replacement = '3';
		else if (*ptr == 'o' || *ptr == 'O')
			leet_replacement = '0';
		else if (*ptr == 't' || *ptr == 'T')
			leet_replacement = '7';
		else if (*ptr == 'l' || *ptr == 'L')
			leet_replacement = '1';

		if (leet_replacement)
			*ptr = leet_replacement;

		ptr++;
	}

	return (str);
}
