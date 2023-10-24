#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the pointer to a char (double pointer)
 * @to: pointer to the char to set the value to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
