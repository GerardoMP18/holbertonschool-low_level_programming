#include "main.h"

/**
 * clear_bit - function that sets the value of a bit
 * to 0 at a given index.
 * @n: value
 * @index: value
 * Return: number
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = ~(1 << index);

	if (index > 63)
	{
		return (-1);
	}

	*n = *n & i;

	return (1);
}
