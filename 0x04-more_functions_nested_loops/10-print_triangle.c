#include "holberton.h"

/**
 * print_triangle - function
 * @n: size of triangle
 * Return: void
 * print a triangle of size n.
 */
void print_triangle(int n)
{
	int i;
	int j;
	int k;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = i; j < n; j++)
				_putchar(' ');
			for (k = n - i; k < n; k++)
				_putchar('#');
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
