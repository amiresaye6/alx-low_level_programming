#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node
 *
 * @head: head pointer
 * @index: the node index we want
 *
 * Return: pointer to the node or NULL if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i = 0;

	node = head;
	while (i < index)
	{
		if (!node)
			return (NULL);
		node = node->next;
		i++;
	}
	return (node);
}
