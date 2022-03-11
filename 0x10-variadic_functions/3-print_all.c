#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - desc
 * @format: desc
 */
void print_all(const char * const format, ...)
{
	int i;
	int y;
	char *pointer;
	va_list valist;

	va_start(valist, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				y = 0;
				break;
			case 'i':
				printf("%i", va_arg(valist, int));
				y = 0;
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				y = 0;
				break;
			case 's':
				pointer = va_arg(valist, char*);
				if (pointer == NULL)
					pointer = "(nil)";
				printf("%s", pointer);
				y = 0;
				break;
			default:
				y = 1;
				break;
		}
		if (format[i + 1] != '\0' && y == 0)
			printf(", ");
		i++;
	}
	printf("\n");
}
