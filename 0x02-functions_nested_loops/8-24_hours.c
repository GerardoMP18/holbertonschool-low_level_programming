#include "main.h"

/**
 * jack_bauer - that prints every minute of the day of Jack Baue
 * Return: the longest day of my life
 */
void jack_bauer(void)
{
	int horas = 0;
	int minutos = 0;

	while (horas < 24)
	{
		while (minutos < 60)
		{
			_putchar('0' + (horas / 10));
			_putchar('0' + (horas % 10));
			_putchar(':');
			_putchar('0' + (minutos / 10));
			_putchar('0' + (minutos % 10));
			_putchar('\n');
			minutos++;
		}
		minutos = 0;
		horas++;
	}
}
