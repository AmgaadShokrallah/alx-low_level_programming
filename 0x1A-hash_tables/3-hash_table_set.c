#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is the hash table.
 * @key: is the key.
 * @value: is the value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	char *value_ = NULL, *key_ = NULL;
	hash_node_t *node = NULL;

	if (ht == NULL|| key == NULL || value == NULL ||
			strlen(key) == 0)
		return (0);

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	key_ = strdup(key);
	if (!key_)
	{
		free(node);
		return (0);
	}
	value_ = strdup(value);
	if (!value_)
	{
		free(node);
		free(key_);
		return (0);
	}

	node->key = key_;
	node->value = value_;
	node->next = NULL;
	i = key_index((unsigned char *)key, ht->size);

	if (!((ht->array)[i]))
		(ht->array)[i] = node;
	else
		make_hash_table(ht, key_, value_, i, node);
	return (1);
}

/**
 * make_hash_table - adds an element to the hash table.
 * @ht: hash table.
 * @key_: key.
 * @value_: is the value associated with the key.
 * @i: index in the hash table 
 * @node: node insert to hash table.
 * Return: Always 1.
 **/
int make_hash_table(hash_table_t *ht, char *key_, char *value_,
						unsigned long int i, hash_node_t *node)
{
	hash_node_t *tmp = (ht->array)[i];

	while (tmp)
	{
		if (strcmp(tmp->key, key_) == 0)
		{
			free(key_);
			free(node);
			free(ht->array[i]->value);
			ht->array[i]->value = value_;
			return (1);
		}
		tmp = tmp->next;
	}
	tmp = (ht->array)[i];
	node->next = tmp;
	(ht->array)[i] = node;
	return (1);
}
