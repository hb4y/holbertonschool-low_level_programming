#include "holberton.h"

/**
 * _abs - function
 * @n: take an int value
 *
 * Return: abs
 * On error, 1 is returned.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
