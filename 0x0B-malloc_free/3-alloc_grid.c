#include "main.h"

/**
 * alloc_grid - Allocate memory for 2D array
 * @width: the number of arrays
 * @height: numbers of elements in each arrays
 * Return: pointer to 2D array location
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = (int **) malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (0);
	}
	for (i = 0 ; i < height ; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (j = 0 ; j < width ; j++)
				free(array[j]);
			free(array);
			return (0);
		}
		for (j = 0 ; j < width ; j++)
		{
			array[i][j] = 0;
		}
	}

	return (array);
}
