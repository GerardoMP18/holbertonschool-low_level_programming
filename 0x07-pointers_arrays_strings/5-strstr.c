#include "main.h"

/**
  * _strstr - Function that locate a substring
  * @haystack: character to fill
  * @needle: character  to fill
  *
  * Return: char value
  */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		for (; needle[b]; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
		}
		if (needle[b] == '\0')
		{
			return (haystack + a);
		}
		a++;
	}

	return ('\0');
}
