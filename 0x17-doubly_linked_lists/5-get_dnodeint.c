#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node
 * @head: parameter
 * @index: parameter
 * Return: number
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new;
	unsigned int x = 0;

	new = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (x < index && new != NULL)
	{
		new = new->next;
		x++;
	}
	return (new);
}
