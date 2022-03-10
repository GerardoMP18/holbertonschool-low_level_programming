#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - Function for print elements of an array
 * @array: Collections
 * @size: size of array
 * @action: action of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
