#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlist
 *
 * @head: pointer to the first node
 *
 * @n: the value to store at the new node
 *
 * Return: pointer to the new node, or NULL on failure
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;
	if (new_node->next)
		(new_node->next)->prev = new_node;

	return (new_node);
}
