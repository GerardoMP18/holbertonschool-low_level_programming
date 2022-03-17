#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked
 * @h: paramater
 * Return: number
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
