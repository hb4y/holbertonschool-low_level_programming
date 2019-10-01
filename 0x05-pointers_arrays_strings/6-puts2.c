#include "holberton.h"

/**
 * puts2 - print a string reverse.
 * @s: string - char pointer to string
 * Return: void.
 */

void puts2(char *str)
{
	for (; *str != '\0'; str = str + 2)
		_putchar(*str);
	_putchar('\n');
}