#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 *
 * @key: the key (cannot be empty)
 * @ht: he hash table you want to look into
 *
 * Return: the value associated with the element, or NULL if key couldn’t be
 * found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp_n;
	unsigned long int index;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);

	temp_n = ht->array[index];

	while (temp_n)
	{
		if (strcmp(temp_n->key, key) == 0)
			return (temp_n->value);
		temp_n = temp_n->next;
	}
	return (NULL);
}
