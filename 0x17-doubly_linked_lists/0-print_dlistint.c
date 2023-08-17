#include "lists.h"

/**
 * print_dlistint - a function prints all items in a dlist
 * @h: pointer to the start of the dlist
 *
 * Return: number of node
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
