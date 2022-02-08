#include <stdio.h>

/**
* main - Prints all posible different combinations
* Return: Always 0 (Success)
*/
int main(void)
{
	int x, d;

	for (x = 48; x <= 57; x++)
	{
		for (d = x; d <= 57; d++)
		{
			if (x != d)
			{
			putchar(x);
			putchar(d);
			if (x < 56)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
