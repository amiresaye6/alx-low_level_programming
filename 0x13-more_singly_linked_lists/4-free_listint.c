#include "lists.h"

/**
 * free_listint - frees listint_t list.
 *
 * @head: head pointer.
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *countainer, *next_node;

	if (!head)
		return;
	countainer = head;
	while (countainer)
	{
		next_node = countainer->next;
		free(countainer);
		countainer = next_node;
	}
}
