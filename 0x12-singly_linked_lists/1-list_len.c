#include "lists.h"

/**
 * list_len - function
 * @h: list
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	if (!h)
		return (0);
	if ((*h).next)
		i += list_len((*h).next);

	return (i);
}
