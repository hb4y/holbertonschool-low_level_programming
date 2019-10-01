#include "holberton.h"

/**
 * print_rev - print a string reverse.
 * @s: string
 * Return: void.
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	for (; *s != '\0'; s++)
		i++;
	for (; i > 0; i--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
