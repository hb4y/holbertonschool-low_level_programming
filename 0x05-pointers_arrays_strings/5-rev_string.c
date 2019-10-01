#include "holberton.h"

/**
 * rev_string - print a string reverse.
 * @s: string - char pointer to string
 * Return: void.
 */

void rev_string(char *s)
{
	int len, mid;
	char tmp, *l, *r;

	len = 0;
	for (; *s != '\0'; s++)
		len++;
	if (len % 2 != 0)
		mid = (len - 1) / 2;
	else
		mid = len / 2;

	for (s = s - len; mid > 0; mid--)
	{
		l = s + mid - 1;
		r = s + len - mid;
		tmp = *l;
		*l = *r;
		*r = tmp;
	}
}
