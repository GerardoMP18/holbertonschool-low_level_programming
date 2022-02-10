#include "main.h"

/**
 * jack_bauer -  prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int numero, mult, prod;
	for (numero = 0; numero < 10; numero++)
	{
		_putchar('0');

		for (mult = 1; mult < 10 ; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = numero * mult;

			if (prod < 10 )
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
