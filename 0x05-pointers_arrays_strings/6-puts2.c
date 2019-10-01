#include "holberton.h"

/**
 * puts2 - print a string reverse.
 * @str: string - char pointer to string
 * Return: void.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
