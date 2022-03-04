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
	int i = 0, j;

	if (min > max)
	{
		return (NULL);
	}

	j = max - min + 1;
	p = malloc(sizeof(*p) * j);
	if (p == NULL)
	{
		return (NULL);
	}

	while (i <= j)
	{
		p[i] = min;
		min++;
		i++;
	}

	return (p);
}
