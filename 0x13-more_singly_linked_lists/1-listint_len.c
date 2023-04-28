#include "lists.h"

/**
 * listint_len - function returns number of elements in a list
 *
 * @h: head pointer
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	int nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (h->n)
			nodes++;
		h = h->next;
	}
	return (nodes);
}
