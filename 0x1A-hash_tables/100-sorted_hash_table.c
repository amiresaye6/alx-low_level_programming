#include "hash_tables.h"

/**
 * shash_table_t - creats the hash table
 * @size: the size of the hash table
 *
 * Return: pointer to the hashtable created
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int index;

	ht = malloc(sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t) * size);

	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	for (index = 0; index < ht->size; index++)
		ht->array[index] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - adds or sets an element to the @ht hash table
 * @ht: pointer to the hash table
 * @key: the key, cant be empity
 * @value: the value, can be empity string
 *
 * Return: 1 if success and 0 if faild
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	shash_node_t *node = NULL, *temp = NULL;

	if (!ht || !ht->array || !key || strlen(key) == 0 || !value)
		return (0);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			/*update the item*/
			if (strcmp(temp->value, value) == 0)
				return (1);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	if (!temp)
	{
		node = malloc(sizeof(shash_node_t));
		if (!node)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->snext = NULL;
		node->sprev = NULL;
		node->next = temp;
		temp = node;

		return (1);
	}
	return (1);
}

/**
 * shash_table_get - gets the value of a hash node
 * @ht: pointer to the hash table
 * @key: the key, cant be empity
 *
 * Return: the value (string)
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (!ht || !ht->array || !key || strlen(key) == 0)
		return (NULL);

	index = hash_djb2((const unsigned char *)key) % ht->size;
	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints the hash table nodes{'y': '0'}
 * @ht: pointer to the hash table
 *
 * Return: (void)
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	char *end = "";

	if (ht)
	{
		printf("{");
		temp = ht->shead;

		while (temp)
		{
			printf("%s", end);
			end = ", ";

			if (temp->key)
				printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->snext;
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - prints the hash table nodes in reverse {'y': '0'}
 * @ht: pointer to the hash table
 *
 * Return: (void)
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char *end = "";

	if (ht)
	{
		printf("{");
		temp = ht->stail;

		while (temp)
		{
			printf("%s", end);
			end = ", ";

			if (temp->key)
				printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->sprev;
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - dleats hash table
 * @ht: pointer to the hash table
 *
 * Return: (void)
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp_node = NULL;
	unsigned long int index = 0;

	if (ht)
	{
		while (index < ht->size)
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
			index++;
		}
		free(ht->array);
		free((void *)ht);
	}
}
