#include "main.h"
/**
 * _print_rev_recursion - Function that print a string
 * @s: character
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);

	}
}
