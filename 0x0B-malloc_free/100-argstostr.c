#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * argstostr - concatenates program args
 * @ac: number of args
 * @av: ppointer to args list
 * Return: pointer to argumants string
 */

char *argstostr(int ac, char **av)
{
	char *ptr;

	unsigned long int i = 0, chars_counter = 0;
	int k, j;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (j = 0 ; j < ac ; j++)
	{
		chars_counter += strlen(av[j]) + 1;
	}
	ptr = (char *) malloc(chars_counter + 1);

	if (ptr == NULL)
		return (NULL);

	while (i < chars_counter)
	{
		for (j = 0 ; j < ac ; j++)
		{
			for (k = 0 ; av[j][k] ; k++)
			{
				ptr[i] = av[j][k];
				++i;
			}
			ptr[i] = '\n';
			++i;
		}
		++i;
	}
	ptr[i] = '\0';
	return (ptr);
}
