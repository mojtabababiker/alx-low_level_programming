#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 *                 using linear search algrothim
 * @array: pointer to the integers array
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index of the first appeariance of the value, or -1 in failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
