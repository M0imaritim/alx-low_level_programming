#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 * @key: key whose index is to be found
 * @size: size of hash array
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == NULL)
		return (0);
	return (hash_djb2(key) % size);
}
