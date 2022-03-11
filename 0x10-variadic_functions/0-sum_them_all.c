#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Function for sum of all its parameters
 * @n: numbers
 * Return: Result of the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum = 0, i = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(valist, n);

	while (i < n)
	{
		sum += va_arg(valist, int);
		i++;
	}

	va_end(valist);

	return (sum);
}
