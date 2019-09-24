#include "holberton.h"

/**
 * print_alphabet - function
 * Return: On success 0.
 * On error, 1 is returned.
 */
void print_alphabet(void)
{
	int a;
	int b;

	for (b = 0; b <= 9; b++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
