#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in index
 *
 * @head: head pointer
 * @index: the index of the node to dleate
 *
 * Return: 1 if success and -1 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *front, *back;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	front = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(front);
		return (1);
	}
	while (i < index)
	{
		i++;
		if (!front)
			return (-1);
		back = front;
		front = front->next;
	}
	if (back)
		back->next = front->next;
	free(front);
	return (1);
}
