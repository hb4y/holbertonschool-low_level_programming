#include "lists.h"

/**
 * print_listint - function
 * @h: list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;

	if (!h)
		return (0);
	if ((*h).n)
	{
		printf("%i\n", (*h).n);
		i++;
	}

	if ((*h).next)
		i += print_listint((*h).next);

	return (i);
}
