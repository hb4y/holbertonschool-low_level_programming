#include "holberton.h"

/**
 * print_most_numbers - function
 * Return: a * b
 * multi two integers
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 52 || i == 50)
			_putchar(i);
	}
	_putchar('\n');
}
