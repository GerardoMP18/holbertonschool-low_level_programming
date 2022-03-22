#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list.
 * @head: parameter
 * @index:parameter
 * Return: number
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *list;
	unsigned int x = 0;

	list = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (x < index && list != NULL)
	{
		list = list->next;
		x++;
	}
	return (list);
}
