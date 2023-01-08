#include "hash_tables.h"

/**
 * hash_table_delete - delete given hash table
 * @ht: hash table given
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *temp = NULL;
	hash_node_t *trail = NULL;

	if (!ht)
		return;

	while (idx < ht->size)
	{
		temp = ht->array[idx];
		while (temp)
		{
			trail = temp;
			temp = temp->next;
			free(trail->key);
			free(trail->value);
			free(trail);
		}
		idx++;
	}

	free(ht->array);
	free(ht);
}
