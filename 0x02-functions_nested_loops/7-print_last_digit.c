#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: Character to check
 * Return: the value of the last digit.
 */
int print_last_digit(int n)
{
	int a = n % 10;
	
	if(a < 0)
	{
		a = a * -1;
	}
	_putchar('0' + a);

	return(a);	
}
