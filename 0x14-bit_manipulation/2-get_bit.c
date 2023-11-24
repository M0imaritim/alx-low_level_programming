#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int
 * @index: index of bit
 * Return: value of bit @index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;
	int bit_value;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;
	bit_value = (n & mask) ? 1 : 0;

	return (bit_value);
}
