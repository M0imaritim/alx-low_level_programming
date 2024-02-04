#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;
	char *flag;

	if (ht == NULL)
		return;
	printf("{");

	flag = "";

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", flag, tmp->key,
			       hash_table_get(ht, tmp->key));
			flag = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
