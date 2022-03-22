#include "lists.h"

/**
 * delete_nodeint_at_index - Function that deletes the node at index
 * index of a listint_t
 * @head: paramater
 * @index: parameter
 * Return: number
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *list;
	listint_t *new_list;
	unsigned int idx = index;

	if (*head == NULL)
	{
		return (-1);
	}
	list = *head;
	if (idx == 0)
	{
		list = list->next;
		free(*head);
		*head = list;
		return (1);
	}
	else
	{
		while (idx - 1 > 0)
		{
			if (list->next == NULL)
			{
				return (-1);
			}
			list = list->next;
			idx--;
		}
		new_list = list;
		new_list = new_list->next->next;
		free(list->next);
		list->next = new_list;

	}
	return (1);
}
