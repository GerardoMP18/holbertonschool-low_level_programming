#include <stdio.h>
#include <stdlib.h>
/**
 * print_all - function that prints anything.
 * @format: format
 */
void print_all(const char * const format, ...)
{
	int i, y, va_argI;
	char *pointer, *va_argC;
	va_list valist;
	double va_argD;

	va_start(valist, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		switch (format[i])
		{
			case 'c':
				va_argI = va_arg(valist, int);
				printf("%c", va_argI);
				y = 0;
				break;
			case 'i':
				va_argI = va_arg(valist, int);
				printf("%i", va_argI);
				y = 0;
				break;
			case 'f':
				va_argD = va_arg(valist, double);
				printf("%f", va_argD);
				y = 0;
				break;
			case 's':
				va_argC = va_arg(valist, char*);
				pointer = va_argC;
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
	}
	printf("\n");
}
