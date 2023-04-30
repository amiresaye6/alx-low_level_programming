#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 *
 * @head: pointer to head
 *
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *next = NULL, *previus = NULL;

	while (current)
	{
		next = current->next;
		current->next = previus;
		previus = current;
		current = next;
	}
	*head = previus;
	return (*head);
}
