#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - desc
 * @argc: argument counter
 * @argv: argument vector
 * Return: success
 */

int main(int argc, char *argv[])
{
	int i, y;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = atoi(argv[1]);
	y = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", f(i, y)); /* calculate via function ptr */

	return (0);
}
