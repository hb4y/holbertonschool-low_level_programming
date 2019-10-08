#include "holberton.h"

/**
 * print_diagsums - function
 * @a: 2D char pntr
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int aux, aux2;

	aux = 0;
	aux2 = 0;
	for (i = 0; i < (size * size); i += (size + 1))
		aux += a[i];
	for (i = size - 1; i <= ((size * size) - 2); i += (size - 1))
		aux2 += a[i];
	printf("%d, %d\n", aux, aux2);
}
