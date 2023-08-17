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
	dlistint_t *temp = head;

	for (i = 0; temp; i++)
		temp = temp->next;
	if (index > i || !head)
		return (NULL);
	for (int n = 0; n <= i; n++)
		head = head->next;
	return (head);
}
