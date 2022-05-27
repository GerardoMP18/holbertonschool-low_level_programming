#include "hash_tables.h"

/**
 * hash_table_create - Function for the create hash table
 * @size: size of the array
 * Return: Pointer create of hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;

	new_hash_table = malloc(sizeof(hash_table_t));

	if (new_hash_table == NULL)
	{
		return (NULL);
	}

	new_hash_table->size = size;

	new_hash_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}

	return (new_hash_table);
}
