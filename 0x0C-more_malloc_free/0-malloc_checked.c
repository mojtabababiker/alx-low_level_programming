#include "main.h"

/**
 * malloc_checked - allocate memory usin malloc
 * @b: variable to allocate for
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
