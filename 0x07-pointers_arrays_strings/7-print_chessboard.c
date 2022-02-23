#include "main.h"

/**
  * print_chessboard - The function that Print the chessboard
  * @a: array
  *
  * Return: zero
  */
void print_chessboard(char (*a)[8])
{
	int b, c;

	b = 0;
	while (b < 8)
	{
		c = 0;
		while (c < 8)
		{
			_putchar(a[b][c]);
			c++;
		}

		b++;
		_putchar('\n');
	}
}

