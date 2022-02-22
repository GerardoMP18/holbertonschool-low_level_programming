#include "main.h"

/**
  * _strchr - Function that locates a  character in a string
  * @s: first character
  * @c: character is null
  *
  * Return: The character is not found
  */
char *_strchr(char *s, char c)
{
	int a = 0;
	int b;

	while (s[a])
	{
		a++;
	}

	b = 0;
	while (b <= a)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
		b++;
	}

	return ('\0');
}
