#include "holberton.h"

/**
 * print_last_digit - function
 * @n: take an int value
 *
 * Return: last digit if number
 * Just return.
 */
int print_last_digit(int n)
{
	n = n % 10;

	if (n <= 0)
	{
		n = n * (-1);
	}
	_putchar('0' + n);
	return (n);
}
