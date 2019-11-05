#include "lists.h"

/**
 * listint_len - function
 * @h: list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 1;

	if (!h)
		return (0);
	if ((*h).next)
		i += listint_len((*h).next);

	return (i);
}
