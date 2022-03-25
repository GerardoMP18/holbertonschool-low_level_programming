#include "main.h"

/**
 * flip_bits - Function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: value
 * @m: value
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned long int x;

	xor = n ^ m;
	x = 0;

	while (xor != '\0')
	{
		if (xor & 1)
			x++;

		xor = xor >> 1;
	}
	return (x);
}
