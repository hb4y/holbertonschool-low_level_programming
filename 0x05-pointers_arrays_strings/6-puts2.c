#include "holberton.h"

/**
 * puts2 - print a string reverse.
 * @str: string - char pointer to string
 * Return: void.
 */

void puts2(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
