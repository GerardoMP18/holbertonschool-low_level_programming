#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Function for prints strings by a new line
 * @separator: .....
 * @n: list
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *pointer;
	unsigned int i;

	if (n > 0)
	{
		va_start(valist, n);

		for (i = 0; i < n; i++)
		{
			pointer = va_arg(valist, char *);
			if (pointer == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", pointer);
			}
			if (i != n - 1 && separator != NULL)
			{
				printf("%s", separator);
			}
		}

		va_end(valist);
	}
	printf("\n");
}
