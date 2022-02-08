#include <stdio.h>

/**
 * main - print the alphabet in lowercase and then 
 * in uppercase
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
		putnar(n);
	for (n = 'A'; n <= 'Z'; n++)
		putnar(n);
	putnar('\n');
	return (0);
}
