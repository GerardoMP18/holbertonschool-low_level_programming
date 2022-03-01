#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - Function for creates an arrays of chars
 * @size: The size of the array
 * @c: Initializer
 * Return : The pointer "c"
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(*p) * size);
	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;

	while (i < size)
	{
		p[i] = c;
		i++;
	}

	return (p);
}
