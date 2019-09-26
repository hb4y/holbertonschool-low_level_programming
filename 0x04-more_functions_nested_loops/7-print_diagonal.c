#include "holberton.h"

/**
 * print_diagonal - function
 * @n: number of lines
 * Return: void
 * print n and \ at the end.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 2; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
