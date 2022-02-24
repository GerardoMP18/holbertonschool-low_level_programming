#include "main.h"

/**
  * factorial - Function that return the factorial of a
  * given number
  * @n: character
  * Return: output
  */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		fact = n * factorial(n - 1);
	}
	return (fact);
}
