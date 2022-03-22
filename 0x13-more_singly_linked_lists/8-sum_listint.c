#include "lists.h"

/**
 * sum_listint - function that returns the sum of
 * all the data (n) of a listint_t
 * @head: parameter
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
	listint_t *list;
	int suma;

	list = head;

	if (head == NULL)
	{
		return (0);
	}

	suma = 0;
	while (list != NULL)
	{
		suma = suma + list->n;
		list = list->next;
	}
	return (suma);
}
