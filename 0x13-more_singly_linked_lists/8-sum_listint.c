#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all n of listint_t list
 *
 * @head: head pointer
 *
 * Return: sum of all n or 0 if empty list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
