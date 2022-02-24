#include "main.h"
#include <stdio.h>

/**
  * _sqrt_recursion - Function that returns the natural
  * square root of a number
  * @n: input
  *
  * Return: ouput
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - Calculates natural square root
  * @n: character
  * @i: character
  * Return: output
  */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
