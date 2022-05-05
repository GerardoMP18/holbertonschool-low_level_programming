#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint_end - Function that adds a new node
 * @head: parameter
 * @n: parameter
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nodo;
	dlistint_t *nodo_new;
	int count;

	nodo = malloc(sizeof(dlistint_t));

	if (nodo == NULL)
	{
		return (NULL);
	}

	nodo->n = n;
	nodo->next = NULL;
	nodo->prev = NULL;
	nodo_new = *head;

	if (*head == NULL)
	{
		*head = nodo;
	}
	else
	{
		count = 0;
		while (nodo_new->next != NULL)
		{
			nodo_new = nodo_new->next;
			count++;
		}
		nodo->next = NULL;
		nodo->prev = nodo_new;
		nodo_new->next = nodo;
	}
	return (nodo);
}
