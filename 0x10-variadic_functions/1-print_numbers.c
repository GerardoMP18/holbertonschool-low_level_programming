#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - Function for prints numbers by
 * a new line
 * @separator: The string to be printed between numbers
 * @n: list
 * Return: ....
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	int var;

	if (n > 0)
	{
		va_start(valist, n);
		for (i = 0; i < n; i++)
		{
			var = va_arg(valist, int);
			printf("%d", var);

			if (separator != NULL && i != n - 1)
			{
				printf("%s", separator);
			}
		}
		va_end(valist);
	}
	printf("\n");
}
