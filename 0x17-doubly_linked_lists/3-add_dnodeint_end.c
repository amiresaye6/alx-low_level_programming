#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end of
 * dlistint_t list.
 * @head: pointer to the first node of a dlist
 *
 * @n: the val of the new node
 *
 * Return: pointet to the new list of non if failide
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
	return (new_node);
}
