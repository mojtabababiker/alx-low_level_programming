#include "main.h"

/**
 * create_array - creates an array of chars,
 *  and initializes it with a specific char.
 * @size: the size of array
 * @c: array initialision char
 * Return: a pointer to that array, NULL if the size is 0
 * or NULL if creating array was failled
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *) malloc((sizeof(c) * size) + 1);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0 ; i < size ; i++)
	{
		array[i] = c;
	}
	array[size] = '\0';
	return (array);
}
