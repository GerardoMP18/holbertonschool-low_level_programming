#include <stdio.h>

/**
 * main - print the sum of even 4,000,000
 * Return: 0
 */

int main(void)
{
	int suma_eventos = 0;
	int a;
	int b;
	int sum = 1;

	a = 1;
	b = 1;

	while (b < 4000000)
	{
		sum = a + b;
		a = b;
		b = sum;
		if ((sum <= 4000000) && (sum % 2 == 0))
			suma_eventos += sum;
	}
	printf("%d\n", suma_eventos);

	return (0);
}
