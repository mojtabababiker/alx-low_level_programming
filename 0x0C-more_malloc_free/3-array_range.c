#include "main.h"

/**
 * array_range - creat array of integers
 * @min: starting number
 * @max: stopping number
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, j;

	if (min > max)
		return (NULL);
	array = malloc((1 + (max - min)) * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = min, j = 0 ; i <= max ; i++, j++)
		array[j] = i;
	return (array);
}
