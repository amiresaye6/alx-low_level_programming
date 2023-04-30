#include "lists.h"

/**
 * find - finds a loop in linked lists
 *
 * @head: head pointer
 *
 * Return: address of start node, null
 */

listint_t *find(listint_t *head)
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

/**
 * free_listint_safe - a function that frees a listint_t list.
 *
 * @h: head pointer
 *
 * Return: sixe of the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *nextn, *loopn;
	size_t size;
	int loop = 1;

	if (!h || !*h)
		return (0);
	loopn = find(*h);
	for (size = 0; (*h != loopn || loop) && *h != NULL; *h = nextn)
	{
		size++;
		nextn = (*h)->next;
		if (*h == loopn && loop)
		{
			if (loopn == loopn->next)
			{
				free(*h);
				break;
			}
			size++;
			nextn = nextn->next;
			free((*h)->next);
			loopn = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (size);
}
