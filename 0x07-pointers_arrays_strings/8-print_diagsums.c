#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Function that print the sum of two
  * diagonals of square matrix
  * @a: matrix
  * @size: the size
  *
  * Return: zero
  */
void print_diagsums(int *a, int size)
{
	int b, suma1 = 0, suma2 = 0;

	b = 0;
	while (b < size)
	{
		suma1 += a[(size + 1) * b];
		suma2 += a[(size - 1) * (b + 1)];
		b++;
	}

	printf("%d, %d\n", suma1, suma2);
}
