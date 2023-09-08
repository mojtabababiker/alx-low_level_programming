#include "hash_tables.h"

/**
 * hash_table_delete - delete and free all the hash table nodes
 * @ht: the hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t **arry = NULL, *temp = NULL;
	unsigned long int i = 0;

	arry = ht->array;
	for (i = 0 ; i < ht->size ; i++)
	{
		while (arry[i] != NULL)
		{
			temp = arry[i]->next;
			free_node(arry[i]);
			arry[i] = temp;
		}
	}
	free(ht->array);
	free(ht);
}
