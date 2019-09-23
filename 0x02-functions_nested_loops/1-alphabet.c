#include "holberton.h"

/**
 * main - main function 
 * Return: On success 0.
 * On error, 1 is returned.
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
