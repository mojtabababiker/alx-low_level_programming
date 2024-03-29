#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: pointer to the hash table
 * @key: string that represents the key
 * @value: string that represents the value
 * Return: 1 in success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = (char *)key;
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node);
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	insert_node(node, ht, index);
	return (1);
}


/**
 * insert_node - insert node in the array
 * @node: the node to be inserted
 * @table: pointer to the hash table
 * @index: the index of the h_node
 * Return: 1 in success 0 otherwise
 */
int insert_node(hash_node_t *node, hash_table_t *table,
		unsigned long int index)
{
	hash_node_t *prev = NULL, *h_node = NULL;

	h_node = table->array[index];
	if (h_node == NULL)
	{
		/* an empty spot on the array or update the Key*/
		node->next = h_node;
		table->array[index] = node;
		return (1);
	}
	while (h_node != NULL)
	{
		if (strcmp(node->key, h_node->key) == 0)
		{
			node->next = h_node->next;
			free_node(h_node);
			if (prev != NULL)
				prev->next = node;
			else
				table->array[index] = node;
			return (1);
		}
		prev = h_node;
		h_node = h_node->next;
	}
	node->next = table->array[index];
	table->array[index] = node;
	return (1);
}

/**
 * free_node - free a single node
 * @h_node: the node to be free'd
 */
void free_node(hash_node_t *h_node)
{
	h_node->next = NULL;
	free(h_node->value);
	free(h_node);
}
