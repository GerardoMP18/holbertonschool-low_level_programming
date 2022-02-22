#include "main.h"

/*
 * _memset - function that fills memory
 * @s: memory area to fill
 * @b: byte to fill
 * @n: bytes of the memory area pointed
 * Return : pointer to the memory area
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
