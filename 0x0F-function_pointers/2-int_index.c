#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Function for searches an integer
 * @array: Collections
 * @size: size of array
 * @cmp: pointers
 * Return: No elememt matches -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
