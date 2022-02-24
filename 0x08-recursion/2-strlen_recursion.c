#include "main.h"
/**
 * _strlen_recursion - function that returns the length
 * of a string.
 * @s: character
 * Return: Always 0
 */
int _strlen_recursion(char *s)
{
	int count;

	if (*s != '\0')
	{
		count = _strlen_recursion(s + 1);
		return (1 + count);
	}
	return (0);
}
