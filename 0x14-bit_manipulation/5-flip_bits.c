#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count;

	xor_result = n ^ m;
	count = 0;
	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
