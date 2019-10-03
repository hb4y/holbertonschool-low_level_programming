#include "holberton.h"

/**
 * reverse_array - reverse int array.
 * @a: int - int pointer
 * @n: number of elements
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int mid, i;
	int tmp;

	if (n % 2 != 0)
		mid = (n / 2) + 1;
	else
		mid = n / 2;

	n = n - 1;
	for (i = 0; i < mid; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - i);
		*(a + n - i) = tmp;
	}
}
