#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 *
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: the value associated with the key. value must
 * be duplicated. value can be an empty string
 *
 * Return: 1 for success and 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *temp;

	if (!ht || !ht->array || !ht->size || !key || sizeof(key) == 0 || !value)
	{
		free(ht->array);
		free(ht);
		return (0);
	}

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	if (temp)
	{
		node->next = temp;
		while (temp)
		{
			temp = temp->next;
		}
	}
	else
	{
		node->next = temp;
		temp = node;
	}

	return (1);
}
