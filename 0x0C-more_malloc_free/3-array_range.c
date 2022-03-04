#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function that creates an array of integers
 * @max: maximum character
 * @min: minimun character
 * Return:  pointer (p)
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}

	j = max - min + 1;
	p = malloc(sizeof(int) * j);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < j)
	{
		p[i] = min;
		min++;
		i++;
	}

	return (p);
}
