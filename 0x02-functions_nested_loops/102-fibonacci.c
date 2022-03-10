#include <stdio.h>

/**
 * main - Program for print first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int i = 0;
	long a = 1;
	long b = 2;

	for (i; i < 50; i++)
	{
		if (i == 0)
			printf("%ld", a);
		else if (i == 1)
			printf(", %ld", b);
		else
		{
			b += a;
			a = b - a;
			printf(", %ld", b);
		}
	}

	printf("\n");
	return (0);
}
