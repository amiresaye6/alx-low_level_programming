#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data (n) of
 * a dlistint_t linked list.
 *
 * @head: pointer to the first node of the d list
 *
 * Return: the sum of all n_s
*/

int sum_dlistint(dlistint_t *head)
{
    long int res = 0;
    if (!head)
        return (0);
    while (head)
    {
        res += head->n;
        head = head->next;
    }
    return (res);
}
