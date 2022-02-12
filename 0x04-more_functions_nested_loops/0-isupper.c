#include "holberton.h"

/**
  * _isupper - checks for uppercase character.
  * @c: character
  *
  * Return: 1 1 if c is uppercase else 0
  */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}

	return (0);
}
