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
	unsigned long int index;
	hash_node_t *temp, *next;

	if (ht)
	{
		for (index = 0; index < ht->size; index++)
		{
			temp = ht->array[index];
			ht->array[index] = ht->array[index]->next;
			while (temp)
			{
				free(temp->key);
				free(temp->value);
				free(temp);
			}
			free(ht->array[index]);
		}
		free(ht->array);
		free(ht);
	}

}
