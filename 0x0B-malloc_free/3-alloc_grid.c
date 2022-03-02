#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer to a two
 * dimensional arrays of integer
 * @width: columns
 * @height: rows
 * Return: desc....
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if (width <= 1 || height <= 1)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			free(array);
			for (j = 0; j <= i; j++)
				free(array[j]);
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	}
	return (array);
}
