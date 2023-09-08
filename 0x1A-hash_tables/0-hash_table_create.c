#include "hash_tables.h"

/**
 * hash_table_create - creats hash table
 *
 * @size: the size of the array (int)
 *
 * Return: pointer to the new created hash table (hash_table_t) or NULL
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);

	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	ht->size = size;

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}

	return (ht);
}
