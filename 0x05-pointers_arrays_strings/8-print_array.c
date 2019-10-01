#include "holberton.h"

/**
 * print_array - print half string.
 * @a: array to values
 * @n: int (number of elements to print)
 * Return: void.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
		printf("%d, ", a[i]);
	printf("%d", a[n - 1]);
	printf("\n");
}
