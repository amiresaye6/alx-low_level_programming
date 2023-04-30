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
	listint_t *f = head, *s = head;
	int ok = 0;

	if (!head)
		return (NULL);
	while (f && s && f->next)
	{
		f = f->next->next;
		s = s->next;
		if (s == f)
		{
			ok = 1;
			break;
		}
	}
	if (ok)
	{
		f = head->next;
		s = head;
	}
	while (f && f < s && ok)
	{
		s = s->next;
		f = f->next;
	}
	return (f);
}
