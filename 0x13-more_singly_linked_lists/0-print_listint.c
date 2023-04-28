#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a list.
 *
 * @h: pointer to the first element
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
