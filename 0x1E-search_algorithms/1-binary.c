#include "search_algos.h"

int search(int *array, size_t start, size_t end, int value);

/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using binary search algrothim
 * @array: ppointer to the aray of integers
 * @size: the size of the array
 * @value: the value to search for
 * Return:  the index of the first appeariance of valuebor -1
 */
int binary_search(int *array, size_t size, int value) {

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
int search(int *array, size_t start, size_t end, int value) {
	size_t mid = (start + end) / 2, i = 0;

	if (start > end)
		return (-1);
	printf("Searching in array: ");
	for (i = start; i <= end; i++) {
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
	return (search(array, start, mid - 1, value));
}
