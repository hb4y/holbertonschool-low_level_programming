#include "lists.h"
/**
 * dlistint_len - function
 * @h: list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	if (!h)
		return (0);

	while ((*h).prev)
		h = (*h).prev;

	for (i = 1; (*h).next; h = (*h).next, i++)
		;

	return (i);
}
