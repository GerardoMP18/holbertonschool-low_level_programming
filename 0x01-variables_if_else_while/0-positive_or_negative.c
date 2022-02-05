#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Print's number (if) positive , (else if) zero, else(negative)
 *
 * Return: is 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
