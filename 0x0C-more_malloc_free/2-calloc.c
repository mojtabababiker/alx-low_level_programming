#include "main.h"

/**
 * _calloc - simulate calloc C stander function
 * @nmemb: number of memoru blocks to allocate
 * @size: size of each block
 * @return: a void pointer to the base of allocated blocks
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	if (size == sizeof(int))
	{
		int *ptr = malloc(nmemb * size);
                if (ptr == NULL)
                return (NULL);
                for (i = 0 ; i < nmemb * size ; i = i + size)
                        ptr[i] = 0;
                return (ptr);
	}
	else if (size == sizeof(long))
	{
                long *ptr = malloc(nmemb * size);
                if (ptr == NULL)
                return (NULL);
                for (i = 0 ; i < nmemb * size ; i = i + size)
                        ptr[i] = 0;
                return (ptr);
	}
	else if (size == sizeof(double))
	{
                double *ptr = malloc(nmemb * size);
                if (ptr == NULL)
                return (NULL);
                for (i = 0 ; i < nmemb * size ; i = i + size)
                        ptr[i] = 0;
                return (ptr);
	}
	else if (size == sizeof(float))
	{
                float *ptr = malloc(nmemb * size);
                if (ptr == NULL)
                return (NULL);
                for (i = 0 ; i < nmemb * size ; i = i + size)
                        ptr[i] = 0;
                return (ptr);
	}
	else
	{
		char *ptr = malloc(nmemb * size);
		if (ptr == NULL)
                return (NULL);
		for (i = 0 ; i < nmemb * size ; i = i + size)
			ptr[i] = 0;
		return (ptr);
	}

	return (NULL);
}
