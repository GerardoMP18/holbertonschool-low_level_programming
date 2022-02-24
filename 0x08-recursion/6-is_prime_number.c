#include "main.h"

/**
 * prime_aux - desc
 * @n: character
 * @i: character
 * Return: 1
 */

int prime_aux(int i, int n)
{
	if (i == n)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (prime_aux(i + 1, n));
}

/**
 * is_prime_number - Function that returns 1 if the
 * input integer is a primer number
 * @n: integer
 * Return: output
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (prime_aux(2, n));
}
