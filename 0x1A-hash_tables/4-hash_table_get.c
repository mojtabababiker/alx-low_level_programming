#include "hash_tables.h"

/**
 * hash_table_get - get the value associated with the key `key`
 * @ht: the hash table to lock at
 * @key: the key to lock for
 * Return: the value of `key` or NULL in failure
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;

	if (ht == NULL || ht->array == NULL || key == NULL)
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
