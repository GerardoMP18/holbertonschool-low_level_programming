#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - desc
 * @s: Operation
 * Return: pointer
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
	}

	return (NULL);
}
