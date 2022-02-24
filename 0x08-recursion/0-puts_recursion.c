#include "main.h"

/**
  * _puts_recursion -Function that print a string
  * followed by a new line
  * @s: character
  *
  * Return: success
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
	_putchar(*s);
	s++;
	_puts_recursion(s);
	}
}
