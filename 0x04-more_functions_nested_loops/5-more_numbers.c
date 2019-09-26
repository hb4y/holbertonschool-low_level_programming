#include "holberton.h"

/**
 * print_numbers - function
 * Return: a * b
 * multi two integers
 */
void print_numbers(void)
{
	int i;
	int j;

	for (i = 48; i <= 49; i++)
	{
		if (i == 49)
			_putchar(i);
		for (j = 48; j <= 57; i++)
		{
			_putchar(j);
		}
	}
	_putchar('\n');
}
