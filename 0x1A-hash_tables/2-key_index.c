#include "hash_tables.h"

/**
 * key_index - covert key into index
 *
 * @size: the size of the array (int)
 * @key: the key
 *
 * Return: the hashed index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;
	return (index);
}
