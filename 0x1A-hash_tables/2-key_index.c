#include "hash_tables.h"

/**
 * key_index - return the index at which the key/value pair should stored
 *             in the array
 * @key: the key of the value that would be stored
 * @size: the size of the array
 * Return: the array indext in whixh the key/value will be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key)) % size);
}
