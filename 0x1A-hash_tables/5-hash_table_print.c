#include "hash_tables.h"

/**
 * hash_table_print - function that retrieves a value associated with a key.
 *
 * @ht: he hash table you want to look into
 *
 * Return: (void)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *temp;
	char *end = "";

	if (ht)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			temp = ht->array[index];
			while (temp)
			{
				printf("%s", end);
				end = ", ";
				if (temp->key)
					rintf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
		printf("}\n");
	}
}
