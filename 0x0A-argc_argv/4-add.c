#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *is_number - print number
 *@argv: arguments vector
 *Return: 1
 */

int is_number(char *argv)
{
	char *p =  argv;
	int flag = 0;

	while (*p != '\0')
	{
		if (flag == 0 && *p == 45)
		{
			p++;
			flag = 1;
			continue;
		}
		flag = 1;

		if (*p > 47 && *p < 58)
		{
			p++;
		}
		else
		{
			return (0);
		}

	}
	return (1);
}

/**
 *main - print the addition of argv's numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int i = 1, sum = 0;

	while (i < argc)
	{
		if (is_number(argv[i]) == 1)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
