#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: = is the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned int i, f = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			tmp = tmp->next;
			f = 1;
		}
	}
	printf("}\n");
}
