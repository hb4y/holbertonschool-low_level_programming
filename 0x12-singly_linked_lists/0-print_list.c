#include "lists.h"

/**
 * print_list - function
 * @h: list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	if (!(*h).str)
	{
		printf("[0] (nil)\n");
		i++;
	}
	else if ((*h).str)
	{
		printf("[%u] %s\n", (*h).len, (*h).str);
		i++;
	}

	if ((*h).next)
		i += print_list((*h).next);

	return (i);
}
