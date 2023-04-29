#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 *
 * @head: head pointer
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *free_node, *new_node;

	if (head)
	{
		new_node = *head;
		free_node = new_node;
		while (free_node)
		{
			new_node = new_node->next;
			free(free_node);
			free_node = new_node;
		}
		*head = NULL;
	}

}
