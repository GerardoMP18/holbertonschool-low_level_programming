#include "main.h"

/**
  * _strspn - The fucntion that gets the length of a prefix substring
  * @s: character
  * @accept: Character
  *
  * Return: The  number of bytes in the init segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		for (b = 0; s[b] != 32; b++)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
		}
		a++;
	}

	return (t);
}

