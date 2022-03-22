#include "lists.h"
/**
 * add_nodeint_end - Function that adds a new node at
 * the end of a listint_t list.
 * @head: parameter
 * @n: parameter
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list;
	listint_t *list_new;
	int x;

	list = malloc(sizeof(listint_t));

	if (list == NULL)
	{
		return (NULL);
	}

	list->n = n;
	list->next = NULL;
	list_new = *head;

	if (*head == NULL)
	{
		*head = list;
	}
	else
	{
		x = 0;
		while (list_new->next != NULL)
		{
			list_new = list_new->next;
			x++;
		}
		list_new->next = list;
	}
	return (list);
}
