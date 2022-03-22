#include "lists.h"

/**
 * pop_listint - Function that deletes the head
 * node of a listint_t
 * @head: parameter
 * Return: number
 */

int pop_listint(listint_t **head)
{
	listint_t *list;
	int x;

	if (*head == NULL)
	{
		return (0);
	}

	x = (*head)->n;
	list = (*head)->next;
	free(*head);
	*head = list;
	return (x);
}
