#include "main.h"

/**
  * print_triangle -The function prints a triangle
  * of squares according parameter
  * @size: The size of the squares triangle
  *
  * Return: null
  */
void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		x = 0;
		while (x < size)
		{
			for (y = size - x; y > 1; y--)
			{
				_putchar(32);
			}
			for (z = 0; z <= x; z++)
			{
				_putchar(35);
			}
			x++;
			_putchar('\n');
		}
	}
}
