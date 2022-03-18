#include "lists.h"
/**
 * free_list - Function that frees a list_t
 * @head: parameters
 * Return: number;
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head != NULL)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}
}
