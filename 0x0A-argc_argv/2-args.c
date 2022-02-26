#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Print arguments it receives
 * @argc: arguments count
 * @argv: arguments vector
 * Return: success 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
