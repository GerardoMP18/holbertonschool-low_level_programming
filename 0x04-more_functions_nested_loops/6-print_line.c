#include "main.h"

/**
 * print_line - unction that draws a straight line in the terminal.
 *
 * @n: character 
 *
 * Return: Always (0)
 */

void print_line(int n)
{
	int j;

	j = n + 1;

	for (n = 1 ; n < j ; n++)
	{
		_putchar('_');
		if (n <= 0)
		{
		}
	}
	_putchar('\n');
}
