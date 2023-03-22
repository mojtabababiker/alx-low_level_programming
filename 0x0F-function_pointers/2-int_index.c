#include "function_pointers.h"

/**
 * int_index - search for certain integer number from array element
 * @array: pointer to int array to search from
 * @size: number of elements in array
 * @cmp: pointer to compire function
 * Return: index of the wanted int, -1 if no element found
 *          or size is less than or equal to 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size == 0)
		return (-1);
	if ((array != NULL) && (cmp != NULL))
	{
		for (index = 0 ; index < size ; index++)
		{
			if (cmp(array[index]))
				return (index);
		}
	}
	return (-1);
}
