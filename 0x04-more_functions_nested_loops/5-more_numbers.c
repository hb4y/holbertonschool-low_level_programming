#include "holberton.h"

/**
 * more_numbers - function
 * Return: void
 * 0 - 14
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		if (i > 9)
			_putchar(((i / 10) % 10) + 48);
		_putchar((i % 10) + 48);
	}
	_putchar('\n');
}
