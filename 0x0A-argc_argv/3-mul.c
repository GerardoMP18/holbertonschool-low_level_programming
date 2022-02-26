#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - Program that multiplies two numbers.
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always zero
  */
int main(int argc, char *argv[])
{
	int numero1, numero2 = 0;

	if (argc == 3)
	{
		numero1 = atoi(argv[1]);
		numero2 = atoi(argv[2]);
		printf("%d\n", numero1 * numero2);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
