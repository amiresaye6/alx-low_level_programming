#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 *
 * @ht: he hash table you want to look into
 *
 * Return: (void)
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp_node = NULL;
	unsigned long int index = 0;

	if (ht)
	{
		for (index = 0; index < ht->size; index++)
		{
			while (ht->array[index])
			{
				tmp_node = ht->array[index];
				ht->array[index] = ht->array[index]->next;

				if (tmp_node->value)
					free(tmp_node->value);
				if (tmp_node->key)
					free(tmp_node->key);
				free(tmp_node);
			}
			free(ht->array[index]);
		}
		free(ht->array);
		free((void *)ht);
	}
}
