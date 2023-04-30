#include "lists.h"
/**
 * _ref - reallocate the memory
 * @l: the old
 * @num: the size
 * @n: the new
 *
 * Return: pointer
 */

const listint_t **_ref(const listint_t **l, size_t num, const listint_t *n)
{
	const listint_t **new;
	size_t i = 0;

	new = malloc(num * sizeof(listint_t *));
	if (!new)
	{
		free(l);
		exit(98);
	}
	while (i < num - 1)
	{
		new[i] = l[i];
		i++;
	}
	new[i] = n;
	free(l);
	return (new);
}

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 *
 * @head: pointer to the head
 *
 * Return: number of nodes or 98 if failed
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t **node = NULL;
	size_t num = 0, i;

	while (head)
	{
		for (i = 0; i < num; i++)
		{
			if (head == node[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(node);
				return (num);
			}
		}
		num++;
		node = _ref(node, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(node);
	return (num);
}
