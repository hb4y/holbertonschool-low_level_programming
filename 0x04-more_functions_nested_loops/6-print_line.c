#include "holberton.h"

/**
 * print_line - function
 * @n: number of lines
 * Return: void
 * print n lines
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
