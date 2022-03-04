#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - .....
 * @s1: .....
 * @s2: .....
 * @n: ......
 * Return: ....
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, k = n;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;

	while (s1[i])
	{
		k++;
		i++;
	}

	p = malloc(sizeof(char) * (k + 1));

	if (p == NULL)
		return (NULL);

	k = 0;
	i = 0;
	while (s1[i])
	{
		p[k++] = s1[i];
		i++;
	}

	i = 0;
	while (s2[i] && i < n)
	{
		p[k++] = s2[i];
		i++;
	}
	return (p);
}
