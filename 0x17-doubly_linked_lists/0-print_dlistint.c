#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint -  function that prints all the elements
 * @h: List of elements
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
