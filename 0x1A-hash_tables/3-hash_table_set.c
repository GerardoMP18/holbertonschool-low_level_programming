#include "hash_tables.h"
/**
 * hash_table_set - Function that adds an element to the hash table
 * @ht: Hash table
 * @key: The key
 * @value: The value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	hash_node_t *tmp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (0);
	}

	/*Obtener numero de index*/
	index = key_index((const unsigned char *)key, ht->size);

	/*Asignar el index a la tabla tmp para validar si existe*/
	tmp = ht->array[index];

	/*Si la clave ya esta en el indice actualice el valor*/
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
