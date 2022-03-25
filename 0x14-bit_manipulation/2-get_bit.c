#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at
 * a given index.
 * @n: ....
 * @index: ...
 * Return: number bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int resultado;

	if (index > 63)
	{
		return (-1);
	}
	else
	{
		resultado = n >> index;
	}

	resultado = resultado & 1;

	return (resultado);
}
