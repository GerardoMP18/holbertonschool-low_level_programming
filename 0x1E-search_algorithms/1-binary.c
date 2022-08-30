#include "search_algos.h"
/**
 * binary_search - function that searches for a value
 * in a sorted array of integers
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: number of index array to search, but if no
 * searched elements return -1
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int i;
	unsigned int first = 0;
	unsigned int last = size - 1;
	unsigned int mid;

	if (array == NULL)
		return (-1);

	while (first <= last)
	{
		mid = (first + last) / 2;

		printf("Searching in array: ");
		for (i = first; i <= last; i++)
		{
			if (i != first)
			{
				printf(", %i", array[i]);
			}
			else
			{
				printf("%i", array[i]);
			}
		}
		printf("\n");

		if (array[mid] < value)
		{
			first = mid + 1;
		}
		else if (array[mid] > value)
		{
			last = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
