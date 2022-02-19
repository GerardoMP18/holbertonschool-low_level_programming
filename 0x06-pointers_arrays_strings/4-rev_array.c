#include "main.h"
#include <stdio.h>

/**
 * reverse_array -Function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, x;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (x = 0; x < i / 2; x++)
	{
	aux = a[x];
	a[x] = *p;
	*p = aux;
	p--;
	}
}
