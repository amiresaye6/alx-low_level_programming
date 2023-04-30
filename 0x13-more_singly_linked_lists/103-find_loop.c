#include "lists.h"

/**
 * find_listint_loop - finds loop in list
 *
 * @head: pointer to head
 *
 * Return: address of start nood of the loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p, *e;

	if (!head)
		return (NULL);
	for (e = head->next; e; e = e->next)
	{
		if (e == e->next)
			return (e);
		for (p = head; p; p = p->next)
			if (p == e->next)
				return (e->next);
	}
	return (NULL);
}
