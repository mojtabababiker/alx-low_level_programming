#include "function_pointers.h"

/**
 * array_iterator - call action each time with one element from array
 * @array: pointer to the args that will be passed to action
 * @size: the number of the args in array
 * @action: the callback function to be called
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	if ((array != NULL) && (action != NULL))
	{
		for (i = 0 ; i < size ; i++)
		{
			action(array[i]);
		}
	}
}
