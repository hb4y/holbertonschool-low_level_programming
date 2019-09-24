#include "holberton.h"

/**
 * _islower - function
 * @c: keep return value
 *
 * Return: On success 0.
 * 1 if lower 0 if not
 */
int _islower(int c)
{
	int a;

	if (c >= 97 && c <= 122)
	{
		a = 1;
	} else
	{
		a = 0;
	}
	return (a);
}
