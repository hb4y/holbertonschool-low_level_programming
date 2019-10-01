#include "holberton.h"

/**
 * puts_half - print half string.
 * @str: string - char pointer to string
 * Return: void.
 */

void puts_half(char *str)
{
	int len, mid;

	for (len = 0; str[len] != '\0'; len++)
	
	if (len % 2 == 0) 	
		mid = len / 2;
	else
		mid = (len + 1) / 2;
	for (; str[mid] != '\0'; ++mid)
		_putchar(str[mid]);
	_putchar('\n');
}
