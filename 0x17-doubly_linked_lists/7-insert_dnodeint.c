#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function insert node
 *
 * @h: double pointer
 * @idx: index
 * @n: int
 * Return: NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmp = *h;

	unsigned int x;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL || h == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	for (x = 0; tmp != NULL && x < idx; x++)
	{
		if (x == idx - 1)
		{
			if (tmp->next == NULL)
				return (add_dnodeint_end(h, n));

			new->next = tmp->next;
			new->prev = tmp;
			tmp->next->prev = new;
			tmp->next = new;
			return (new);
		}

		else
			tmp = tmp->next;
	}

	return (NULL);
}
