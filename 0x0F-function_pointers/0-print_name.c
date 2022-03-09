#include <stdio.h>

/**
 * print_name - prints a name
 * @name: character
 * @f: pointer
 * Return: success
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
