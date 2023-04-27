#include "lists.h"

/**
 * add_node - function adds a new node at the beginning of a list
 *
 * @head: first element value
 * @str: the new element value
 *
 * Return: the new elment address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_elment = malloc(sizeof(list_t));

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
	new_elment->next = *head;
	*head = new_elment;
	return (new_elment);
}
