#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value
 * associated with a key.
 * @ht: the hash table
 * @key: the key of the hash table
 * Return:The value associated with the element or null
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL)
	{
		return (NULL);
	}

	index  = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}

	return (NULL);
}
