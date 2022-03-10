#include <stdio.h>

/**
 * main - Program  print largest prime factor of 612852475143
 * Return: success
 */

int main(void)
{
	unsigned long num = 612852475143;
	unsigned long div;

	for (div = 2; div < num; div++)
	{
		if (num % div == 0)
		{
			num /= div;
			div = 2;
		}
	}
	printf("%lu\n", num);
	return (0);
}
