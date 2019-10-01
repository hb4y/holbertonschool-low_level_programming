#include "holberton.h"

/**
 * puts_half - print half string.
 * @str: string - char pointer to string
 * Return: void.
 */

void puts_half(char *str)
{
	int len, mid;
	
	len = 0;
	for (; *str != '\0'; str++)
		len++;
	if (len % 2 != 0)
		mid = (len - 1) / 2;
	else
		mid = len / 2;
	str -= len;
	for (; str[mid] != '\0'; mid++)
		_putchar(str[mid]);
	_putchar('\n');
}
