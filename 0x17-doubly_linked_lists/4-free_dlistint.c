#include "lists.h"

/**
 * free_dlistint - fres a d list
 * @head: pointer to the first node
 *
 * Return: void
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
