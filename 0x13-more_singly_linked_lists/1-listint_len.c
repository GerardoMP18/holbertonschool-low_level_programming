#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in
 * a linked listint_t list
 * @h: Parameter
 * Return: number
 */
size_t listint_len(const listint_t *h)
{
	size_t x;

	x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
