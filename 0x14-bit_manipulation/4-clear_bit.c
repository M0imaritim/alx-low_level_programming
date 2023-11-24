#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at agiven index
 * @index: index of bit
 * @n: pointer to unsigned long int
 * Return: returns 1 if operation is succesful or -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	*n &= ~mask;

	return (1);
}
