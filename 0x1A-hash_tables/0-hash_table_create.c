#include "hash_tables.h"

/**
 * hash_table_create - creat a new hash table with the size `size`
 * @size: the size of the hash nodes array
 * Return: a pointer to the newly created table, or NULL in failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = NULL;

	if (size == 0):
		return (NULL);
	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->array = malloc((sizeof(hash_node_t *) * size));
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	return (table);
}
