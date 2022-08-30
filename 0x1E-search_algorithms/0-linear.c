#include "search_algos.h"
/**
 * linear_search - Function that searches for a value
 * in an array of integers
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: number of index array to search, but if no
 * searched elements return -1
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%i] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}

	return (-1);
}
