#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *list;
	listint_t *new_list;
	unsigned int x;

	new_list = *head;
	list = malloc(sizeof(listint_t));

	if (list == NULL)
	{
		return (NULL);
	}
	list->n = n;

	if (idx == 0)
	{
		list->next = new_list;
		*head = list;
		return (list);
	}

	x = 0;
	while (x < idx - 1)
	{
		if (new_list == NULL)
		{
			free(list);
			return (NULL);
		}
		new_list = new_list->next;
		x++;
	}
	list->next = new_list->next;
	new_list->next = list;
	return (list);

}
