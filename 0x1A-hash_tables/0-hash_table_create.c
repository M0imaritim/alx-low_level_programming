#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: size of array
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;
	hash_node_t **arr;
	unsigned long int i;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);

	arr = malloc(sizeof(hash_node_t *) * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = NULL;

	new_ht->size = size;
	new_ht->array = arr;

	return (new_ht);
}
