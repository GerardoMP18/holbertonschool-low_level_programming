#include "main.h"

/**
 * _atoi - desc.
 * @s: desc
 *
 * Return: A integer
 */
int _atoi(char *s)
{
	int c;
	unsigned int ni = 0;
	int min = 1;
	int isi = 0;

	for (c = 0; s[c]; c++)
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}

		if (isi == 1)
		{
			break;
		}
	}

	ni *= min;
	return (ni);
}
