#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function for sum of all its parameters
 * @n: numbers
 * Return: Result of the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list valist;

	sum = 0;
	va_start(valist, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);

	return (sum);
}
