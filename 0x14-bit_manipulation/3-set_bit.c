#include "main.h"

/**
 * set_bit - function that sets the value of a bit
 * to 1 at a given index.
 * @n: pointer
 * @index: value
 * Return: number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	x = 1 << index;

	if (index > 63)
	{
		return (-1);
	}

	*n = *n + x;

	return (1);
}
