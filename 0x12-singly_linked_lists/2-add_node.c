#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning
 * of a list_t
 * @head: parameter
 * @str: parameter
 * Return: numeber
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *list;
	int contador = 0;

	list = malloc(sizeof(list_t));

	while (contador[str])
	{
		contador++;
	}

	if (list == NULL)
	{
		free(list);
		return (NULL);
	}

	list->str = strdup(str);
	list->len = contador;
	list->next = *head;
	*head = list;
	return (list);
}
