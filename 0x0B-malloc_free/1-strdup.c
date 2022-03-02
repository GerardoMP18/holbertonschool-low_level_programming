#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Thi function for duplicate a string
 * @str: String duplicate
 * Return: the string duplicate
 */

char *_strdup(char *str)
{
	char *p;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 1; str[j]; j++)
	{
		continue;
	}

	p = malloc(sizeof(char) * (j + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		p[i] = str[i];
	}

	return (p);
}


