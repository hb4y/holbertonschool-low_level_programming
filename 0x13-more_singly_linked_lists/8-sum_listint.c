#include "lists.h"

/**
 * sum_listint- sum all n of the nodes
 * @head: listint_t address
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum  = 0;

	if (!head)
		return (sum);

	if (head->next)
		sum += sum_listint(head->next);

	sum += head->n;
	return (sum);
}
