#include "holberton.h"

/**
 * print_square - function
 * @n: number of lines
 * Return: void
 * print n and \ at the end.
 */
void print_square(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
