#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination copy
 * @src: source copy
 * @n: numbers of bytes (characters)
 * Return: pointer to  dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	char *cp;

	cp = dest;

	for (i = 0 ; i < n ; i++)
	{
		*dest = *src;

		dest++;
		src++;
	}
	return (cp);
}
