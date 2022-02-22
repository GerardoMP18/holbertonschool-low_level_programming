#include "main.h"

/**
  * _memset - Function that fills memory
  * @s: memory area to fill
  * @b: byte to fill
  * @n: byte of the memory area pointed
  *
  * Return: Pointer to the memory area
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
