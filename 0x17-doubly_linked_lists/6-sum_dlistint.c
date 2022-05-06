#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data
 * @head: parameter
 * Return: sum of number
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *new;
	int suma  = 0;

	if (head == NULL)
	{
		return (0);
	}

	new = head;

	while (new != NULL)
	{
		suma += new->n;
		new = new->next;
	}
	return (suma);
}
