#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Aways 0 (Sucess)
 */
int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
