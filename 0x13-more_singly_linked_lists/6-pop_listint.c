#include "lists.h"

/**
 * pop_listint - a function that removes head node of a linked list
 *
 * @head: head pointer
 *
 * Return: the value stored in the head
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int val;

	if (!head || !*head)
		return (0);
	node = *head;
	val = node->n;
	*head = node->next;
	free(node);

	return (val);
}
