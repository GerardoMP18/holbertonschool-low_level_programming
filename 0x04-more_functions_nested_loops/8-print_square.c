#include "main.h"

/**
 * print_square - unction that prints a square, followed by a new line
 * @size: character to check
 * Return: 0
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar(10);
	}
	for (i = 0 ; i < size ; i++)
	{
		for (j = 0 ; j < size ; j++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
}
