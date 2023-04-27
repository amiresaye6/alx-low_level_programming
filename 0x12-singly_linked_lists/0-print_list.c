#include "lists.h"

/**
 * print_list - a function that prints the elments of a list
 *
 * @h: a pointer to the first noed of the linked list "head"
 *
 * Return: the number of noeds
 */

size_t print_list(const list_t *h)
{
	int numberOfNodes = 0;

	while (h)
	{

		printf("[%d] %s\n", _strlen(h->str),
			h->str ? h->str : "(nil)");
		h = h->next;
		numberOfNodes++;
	}
	return (numberOfNodes);
}

/**
 * _strlen - calculate the length of a string
 *
 * @str: the string
 *
 * Return: size of the string
 */

int _strlen(char *str)
{
	int len = 0;

	if (str == NULL)
		return (0);
	while (*str++)
		len++;
	return (len);
}
