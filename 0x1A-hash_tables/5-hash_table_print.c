#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int index;
	int flag = 0;

	if (ht == NULL)
	{
		return;
	}

	printf("{");

	index = 0;
	while (index < ht->size)
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
		index++;
	}
	printf("}\n");
}
