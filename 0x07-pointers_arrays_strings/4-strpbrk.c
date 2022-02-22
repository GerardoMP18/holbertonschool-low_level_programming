#include "main.h"

/**
  * _strpbrk -The function that search a string for
  * any of a set of bytes
  * @s: character
  * @accept: character
  *
  * Return: Pointer to thet bity in S
  */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
		}

		a++;
	}

	return ('\0');
}

