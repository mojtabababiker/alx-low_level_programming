#include "search_algos.h"

int search(int *array, size_t start, size_t end, int value);

/**
 * advanced_binary - inhanced binary search to respect the order of the
 *                   duoblicated numbers
 * @array: pointer to the sorted array of integrs
 * @size: the size of the array
 * @value: the value to look for
 * Return: the index of the first appearaince of the value in array, or
 *         -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (search(array, 0, size - 1, value));
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
	int res, mid;
	size_t i;

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
	mid = (start + end) / 2;
	res = array[mid];
	if (res == value)
	{
		if (mid > 0 && array[mid - 1] == value)
			return (search(array, start, mid - 1, value));
		return (mid);
	}
	if (res < value)
		return (search(array, mid + 1, end, value));
	if (mid - 1 < 0)
		return (-1);
	return (search(array, start, mid - 1, value));
}
