#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: is size of the array.
 * Return: pointer to the newly created hash
 * table, or NULL if somethong went wrong.
 **/

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *node_new = NULL;

	node_new = malloc(sizeof(hash_table_t));
	if (node_new == NULL)
		return (NULL);

	node_new->size = size;
	node_new->array = malloc(sizeof(hash_node_t **) * size);
	if (node_new->array == NULL)
	{
		free(node_new);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		(node_new->array)[i] = NULL;
	return (node_new);
}
