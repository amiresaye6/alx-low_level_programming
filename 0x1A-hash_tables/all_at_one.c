#include "hash_tables.h"

/**
 * hash_table_create - creats hash table
 * @size: the size of the hash array (int)
 * Return: pointer to the hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table = NULL;
    unsigned long int index = 0;

    if (!hash_table)
        return (NULL);
    hash_table->size = size;

    hash_table->array = malloc(sizeof(hash_node_t *) * size);
    if (!hash_table->array)
    {
        free(hash_table);
        return (NULL);
    }
    while (index < size)
    {
        hash_table->array[index] = NULL;
        index++;
    }
    return (hash_table);
}

/**
 * hash_djb2 - implementation of the djb2 algorithm
 * @str: string used to generate hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}


/**
 * key_index - creates the index
 * @size: the size of the hash array (int)
 * @key: the string we need to make the index
 * Return: index (lu)
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}

/**
 * key_index - creates the index
 * @key: the string we need to make the index
 * @ht: hash table pointer
 * @value: the value to but in the node
 * Return: 1 for success and 0 for fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL, *tmp_node = NULL;
	char *new_value = NULL;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[index];

	new_value = strdup(value);
	if (!new_value)
		return (0);

	while (tmp_node)
	{
		if (strcmp(tmp_node->key, key) == 0)
		{
			free(tmp_node->value);
			tmp_node->value = new_value;
			break;
		}
		tmp_node = tmp_node->next;
	}

	if (!tmp_node)
	{
		new_node = creat_node(key, new_value);
		if (!new_node)
			return (0);
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}

	return (1);
}

/**
 * creat_node - creats a node
 * @key: the string we need to make the index
 * @value: the value to but in the node
 * Return: node pointer
 */
hash_node_t *creat_node(const char *key, const char *value)
{
	hash_node_t *node = NULL;

    node = malloc(sizeof(hash_node_t));

    if (!node)
        return (NULL);
    node->key = strdup(key);
    node->value = strdup(value);

    return (node);
}
/**
 * hash_table_get - gets the value from a hash table
 * @key: the string we need to make the index
 * @ht: hash table pointer

 * Return: the value (string)
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    hash_node_t *temp = NULL;
    unsigned long int index = 0;

    if (ht && key && strlen(key) != 0)
    {
        index = key_index((const unsigned char *)key, ht->size);

        temp = ht->array[index];

        while (temp)
        {
            if (strcmp(temp->key, key) == 0)
                return (temp->value);
            temp = temp->next;
        }
    }
    return (NULL);
}

/**
 * hash_table_print - prints the hash table
 * @ht: hash table pointer

 * Return: the value (string)
*/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node = NULL;
	unsigned long int index = 0;
	char *end = "";
	if (ht)
	{
		printf("{");
		while (index < ht->size)
		{
			node = ht->array[index];
			while (node)
			{
				printf("%s", end);
				end = ", ";
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
			index++;
		}
		printf("}/n");
	}
}

/**
 * hash_table_delete - dleats the hash table
 * @ht: hash table pointer

 * Return: the value (string)
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;

	if (ht)
	{
		for (index = 0; index < ht->size; index++)
		{
			node = ht->array[index];
			while (node)
			{
				free(node->key);
				free(node->value);
				node = node->next;
			}
			free(node);
		}
		free(ht->array);
		free(ht);
	}
}
