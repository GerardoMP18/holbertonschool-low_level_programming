#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	char x;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
