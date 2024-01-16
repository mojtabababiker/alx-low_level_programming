#include "search_algos.h"

int search(int *array, size_t start, size_t end, int value);

/**
 * exponential_search - search for value using exponential search algrothim
 * @array: pointer to the sorted array of integers
 * @size: the size of the array
 * @value: the value to be searched
 * Return: the index of the first appeariance of value, or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, j = 1;

	if (!array)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i *= 2;
	}
	if (i >= size)
	{
		j = i / 2;
		i = size - 1;
	}
	else
		j = i / 2;
	printf("Value found between indexes [%ld] and [%ld]\n", j, i);
	return (search(array, j, i, value));
}

/**
 * search - helper function for the binary_search function
 * @array: pointer to the array of integers
 * @start: the start index of the array
 * @end: the end index of the array
 * @value: the value to search for
 * Return: the index of first appeariance of value or -1
 */
int search(int *array, size_t start, size_t end, int value)
{
	int mid = (start + end) / 2;
	size_t i = 0;

	if (start > end)
		return (-1);
	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i == end)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
	if (value == array[mid])
		return (mid);
	if (value > array[mid])
		return (search(array, mid + 1, end, value));
	/* if the value is less than the mid value */
	if (mid - 1 < 0)
	{
		printf("Searching in array: %d\n", array[mid]);
		return (-1);
	}
	return (search(array, start, mid - 1, value));
}
