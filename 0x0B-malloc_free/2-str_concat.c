#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat -Function for concatenates two string
 * @s1: first charactersi
 * @s2: second characters
 * Return: two characters concatenates
 */
char *str_concat(char *s1, char *s2)
{
	int i, j = 0, k = 0;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = 0;

	while (s1[i] || s2[i])
	{
		k++;
		i++;
	}

	concat = malloc(sizeof(char) * k);
	if (concat == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (s1[i])
	{
		concat[j++] = s1[i];
		i++;
	}

	i = 0;
	while (s2[i])
	{
		concat[j++] = s2[i];
		i++;
	}
	return (concat);
}
