#include "main.h"

/**
 * _realloc - simulate realloc standerd function
 * @ptr: is preallocated memory
 * @old_size: ptr old_size
 * @new_size: ptr realocating size
 * Return: pointer to the reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr, *ptr1;
	unsigned int i;

	ptr1 = (char *)ptr;

	if (old_size == new_size)
	{

		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		nptr = malloc(new_size);
		if (nptr == NULL)
			return (NULL);
		return ((void *) nptr);
	}
	free(ptr);
	nptr = malloc(new_size);
	if (nptr == NULL)
	{

		return (NULL);
	}
	if (new_size > old_size)
	{
		for (i = 0 ; i < old_size ; i++)
			nptr[i] = ptr1[i];
		free(ptr1);
		return ((void *)nptr);
	}
	for (i = 0 ; i < new_size ; i++)
		nptr[i] = ptr1[i];

	return ((void *)nptr);
}
