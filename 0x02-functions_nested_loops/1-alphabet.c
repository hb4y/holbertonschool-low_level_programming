#include "holberton.h"

/**
 * print_alphabet - function
 * Return: On success 0.
 * Description: print lower alpha.
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
