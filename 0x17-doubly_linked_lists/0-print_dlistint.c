#include "lists.h"
/**
 * print_dlistint - function
 * @h: list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;

	if (!h)
		return (0);
	if ((*h).n)
	{
		printf("%d\n", (*h).n);
		i++;
	}

	if ((*h).next)
		i += print_dlistint((*h).next);

	return (i);
}
