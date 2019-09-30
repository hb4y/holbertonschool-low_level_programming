#include "holberton.h"

/**
 * swap_int - swap the value of two integers.
 * @a: int to swap
 * @b: int to swap
 * Return: void.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
