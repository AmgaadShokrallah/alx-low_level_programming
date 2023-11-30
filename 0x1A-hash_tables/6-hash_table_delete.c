#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: is the hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *x;
	unsigned int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			x = tmp;
			free(x->key);
			free(x->value);
			free(x);
			tmp = tmp->next;
		}
	}
	free(ht->array);
	free(ht);
}
