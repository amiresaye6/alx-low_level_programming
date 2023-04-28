#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginnig of a list
 *
 * @head: pointer to the first noew;
 * @n: the new value to add
 *
 * Return: the address of the new element or NULL if faild
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!head || !new)
	{
		free(new);
		return (NULL);
	}
	if (n)
		new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
