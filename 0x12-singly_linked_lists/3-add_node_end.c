#include "lists.h"

/**
 * add_node_end - function adds a new node at the end of a list
 *
 * @head: first element value
 * @str: the new element value
 *
 * Return: the new elment address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_elment = malloc(sizeof(list_t));
	list_t *node = *head;

	if (!head || !new_elment)
		return (NULL);
	if (str)
	{
		new_elment->str = strdup(str);
		if (!new_elment->str)
		{
			free(new_elment);
			return (NULL);
		}
		new_elment-> len = _strlen(new_elment->str);
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_elment;
	}
	else
		*head = new_elment;
	return (new_elment);
}
