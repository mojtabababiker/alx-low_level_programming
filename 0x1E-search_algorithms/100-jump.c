#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to sorted array of integers
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t block, i = 0, jump = 0;

	if (!array)
		return (-1);
	jump = sqrt(size);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i += jump;
	}
	if (i == 0)
		jump = 0;
	else
		jump = i - jump;
	printf("Value found between indexes [%ld] and [%ld]\n", jump, i);

	block = i;
	for (i = jump; i <= block && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
