#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - function that frees a listint_t list
 * @head: parameter
 * Return: number
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head != NULL)
	{
		new = head;
		head = new->next;
		free(new);
	}
	free(head);
}
