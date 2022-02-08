#include <stdio.h>

/** 
* main - print the alphabet in lowercase
* Return: Always 0 (Success)
*/
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
