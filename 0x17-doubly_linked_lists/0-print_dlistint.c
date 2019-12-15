#include "lists.h"
/**
 * print_dlistint - function
 * @h: list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	if (!h)
		return (0);

	while ((*h).prev)
		h = (*h).prev;

	for (i = 1; (*h).next; h = (*h).next, i++)
		printf("%d\n", (*h).n);

	printf("%d\n", (*h).n);

	return (i);
}
