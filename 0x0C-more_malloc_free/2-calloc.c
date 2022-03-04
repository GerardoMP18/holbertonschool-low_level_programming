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
	int i, j = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	j = nmemb * size;
	p = malloc(j);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		p[i] = 0;
	}

	return (p);
}
