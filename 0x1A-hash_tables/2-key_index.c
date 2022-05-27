#include "hash_tables.h"
/**
 * key_index - Function that fives the index of a key
 * @key: The key of hash
 * @size: The size of hash
 * Return: index stored in the hash table array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
