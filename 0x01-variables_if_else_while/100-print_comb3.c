#include <stdio.h>

/**
 * main - prints all ossible different combinations
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, c;

	for (n = 48; n <= 57; n++)
	{
		for (c = 48; c <= 57; c++)
		{
			putchar(n);
			putchar(c);
			if (n != 57 || c != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
