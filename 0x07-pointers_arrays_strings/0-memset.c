#include "main.h"
/*
 * _memset - function that fills memory with a constant byte
 * @s: memory area to fill
 * @b: byte to fill
 * @n: bytes of the memory area pointed
 * Return : pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a < n)
	{
		s[a] = b;
		a++;
	}

	return (s);
}
