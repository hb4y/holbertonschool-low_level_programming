#include "holberton.h"

/**
 * is_palindrome - function
 * @s: char pntr to string
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (_d_pntr(s, _len(s)));
}

/**
 * _d_pntr - function
 * @n: int
 * @len: len
 * Return: 1 if not 0 if is
 */

int _d_pntr(char *n, int len)
{
	if (len >= len / 2)
	{
		if (*n == n[len - 1])
		{
			return (_d_pntr(n + 1, len - 2));
		} else
			return (0);
	}
	return (1);
}

/**
 * _len - function
 * @n: pntr od chars
 * Return: len
 */

int _len(char *n)
{
	int len;

	len = 0;

	if (*n)
	{
		len++;
		len = len + _len(n + 1);
	}
	return (len);
}
