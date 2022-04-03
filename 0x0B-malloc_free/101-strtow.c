#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **strtow - Entry point
 *
 * Description: write a function that splits a string into words
 * created by your alloc_grid function
 * @str: ...
 * Return: Always 0 (Success)
 */
char **strtow(char *str)
{
	char **s;

	if(str == NULL)
		return (NULL);
	if (str[0] == 0)
		return (NULL);
	s = malloc(3);
	s[0] = malloc(2);
	return (s);
}
