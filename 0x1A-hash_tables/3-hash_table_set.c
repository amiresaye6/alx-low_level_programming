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
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (!node)
		return (0);

	strcpy(node->key, key);
	strcpy(node->value, value);

	if (!ht->array[index])
	{
		/*first node added*/
		node->next = NULL;
		ht->array[index] = node;
	}
	else if (!ht->array[index]->next)
	{
		/*second node added*/
		node->next = ht->array[index];
		ht->array[index]->next = NULL;
	}
	else
	{
		node->next = ht->array[index];
		while (ht->array[index]->next)
			ht->array[index] = ht->array[index]->next;
	}

	return (1);
}
