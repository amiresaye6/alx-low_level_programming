#include "lists.h"

/**
 * get_dnodeint_at_index - returns a node at specific index
 *
 * @head: pointer to the first node
 * @index: the index of the node to return
 *
 * Return: pointer to the node in this index of null if not found
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (i = 0; i < index; i++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
