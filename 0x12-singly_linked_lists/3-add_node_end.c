#include "lists.h"

/**
 * add_node_end - Function that adds a new mode at end of a list_t
 * @head: parameter
 * @str: parameter
 * Return: number
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *list;
	list_t *list_new;
	size_t contador = 0;

	list_new = *head;
	list = malloc(sizeof(list_t));

	if (list == NULL)
	{
		return (NULL);
	}

	list->str = strdup(str);

	if (list->str == NULL)
	{
		free(list);
		return (NULL);
	}
	while (contador[str] != '\0')
	{
		contador++;
	}
	list->len = contador;

	if (*head == NULL)
	{
		list->next = *head;
		*head = list;
	}
	else
	{
		while (list_new->next != NULL)
		{
			list_new = list_new->next;
		}
		list->next = list_new->next;
		list_new->next = list;
	}
	return (*head);
}
