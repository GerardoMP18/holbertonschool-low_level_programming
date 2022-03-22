#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of a listint_t
 * @head: parameter
 * @n: parameter
 * Return: he address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *list;

	list = malloc(sizeof(listint_t));

	if (list == NULL)
	{
		free(list);
		return (NULL);
	}

	list->n = n;
	list->next = *head;
	*head = list;
	return (list);
}
