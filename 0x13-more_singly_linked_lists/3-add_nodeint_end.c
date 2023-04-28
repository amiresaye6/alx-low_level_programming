#include "lists.h"

/**
 * add_nodeint_end - function adds a new node at the end of a list
 *
 * @head: pointer to the first noew;
 * @n: the new value to add
 *
 * Return: the address of the new element or NULL if faild
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (!head || !new)
		return (NULL);
	if (n)
		new->n = n;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
	else
		*head = new;
	return (new);

}
