#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a given
 * position.
 *
 * @head: head pointer
 * @idx: the index to add the new node
 * @n: the new node value
 *
 * Return: pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *front, *back;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	front = *head;
	while (i < idx)
	{
		if (!front)
			return (NULL);
		back = front;
		front = front->next;
		i++;
	}
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = front;
	if (idx == 0)
		*head = new_node;
	else
		back->next = new_node;
	return (new_node);
}
