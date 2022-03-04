#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function that allocates memory for an array,
 * usign malloc.
 * @nmemb: character
 * @size: size character
 * Return: ........
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i, j = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < j)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
