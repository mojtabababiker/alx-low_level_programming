#include "search_algos.h"

int search(int *array, size_t size, size_t start, size_t end, int value);

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * @array: pointer to sorted array of integers
 * @size: the size of the array
 * @value: the value to search for
 * Return: he index of the first appeariance of value, or -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (search(array, size, 0, size - 1, value));
}

/**
 * search - helper function for the binary_search function
 * @array: pointer to the array of integers
 * @size: the size of the array
 * @start: the start index of the array
 * @end: the end index of the array
 * @value: the value to search for
 * Return: the index of first appeariance of value or -1
 */
int search(int *array, size_t size, size_t start, size_t end, int value)
{
	size_t mid = start + (
		((double)(end + start) / (array[end] - array[start])) *
		(value - array[start]));

	if (start <= end && array[start] == array[end])
	{
		if (array[start] == value)
		{
			printf("Value checked array[%ld] = [%d]\n"
			       , start, array[start]);
			return (start);
		}
	}

	if (mid >= size)
	{
		printf("Value checked array[%ld] is out of range\n", mid);
		return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);

	if (start > end)
	{
		printf("Value checked array[%ld] is out of range\n", mid);
		return (-1);
	}
	if (value == array[mid])
		return (mid);
	if (value > array[mid])
		return (search(array, size, mid + 1, end, value));
	/* if the value is less than the mid value */
	return (search(array, size, start, mid - 1, value));
}
