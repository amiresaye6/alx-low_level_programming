#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list_t
 * @h: head pointer to the first noed in the linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
