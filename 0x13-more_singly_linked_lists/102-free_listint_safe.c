#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 *
 * @h: head pointer
 *
 * Return: size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *s, *f, *free_;
	size_t len = 0;

	if (!h || !*h)
		return (0);
	f = (*h)->next;
	s = *h;
	while (f && f < s)
	{
		free_ = s;
		f = f->next;
		s = s->next;
		len++;
		free(free_);
	}
	len++;
	free(s);
	*h = NULL;
	return (len);
}
