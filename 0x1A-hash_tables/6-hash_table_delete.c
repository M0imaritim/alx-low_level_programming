#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: hash table to bedeleted
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *nody;
	unsigned long int i;

	if (ht == NULL)
		return;
	hash_table_print(ht);

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			nody = tmp;
			tmp = tmp->next;
			free(nody->key);
			free(nody->value);
			free(nody);
		}
	}
	free(ht->array);
	free(ht);
}
