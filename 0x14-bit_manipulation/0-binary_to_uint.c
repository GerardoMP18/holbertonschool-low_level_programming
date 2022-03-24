#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - unction that converts a binary number
 * @b: binary
 * Return: converts a number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int resultado = 0;
	int x = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		else
		{
			resultado = 2 * resultado + b[x] - '0';
		}
		x++;
	}
	return (resultado);
}
