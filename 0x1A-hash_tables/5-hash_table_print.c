#include "hash_tables.h"

void print_list(hash_node_t *node);

/**
 * hash_table_print - print a hash table as key:value piar
 * @ht: the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **arry = NULL;
	unsigned long int i = 0;
	int notfirstElement = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	arry = ht->array;
	printf("{");
	for (i = 0 ; i < ht->size ; i++)
	{
		if (arry[i] != NULL)
		{
			notfirstElement = 1;
			printf("'%s': '%s'", arry[i]->key, arry[i]->value);
			print_list(arry[i]->next);
		}
		if (arry[i + 1] != NULL && notfirstElement)
			printf(", ");
	}
	printf("}\n");
}


/**
 * print_list - print the decendants of a node
 * @node: node to print its decendants
 */
void print_list(hash_node_t *node)
{
	while (node != NULL)
	{
		printf(", '%s': '%s'", node->key, node->value);
		node = node->next;
	}
}
