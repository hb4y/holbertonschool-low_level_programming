#include "holberton.h"

/**
 * print_sign - function
 * @n: take an int value
 *
 * Return: On success 0.
 * On error, 1 is returned.
 */
int print_sign(int n)
{
	int a;

	if (n > 0)
	{
		_putchar('+');
		a = 1;
	} else if (n < 0)
	{
		_putchar('-');
		a = -1;
	} else if (n == 0)
	{
		_putchar('0');
		a = 0;
	}
	return (a);
}
