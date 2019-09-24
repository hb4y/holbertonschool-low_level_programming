#include "holberton.h"

/**
 * _isalpha - main function
 * @c: take an int value
 *
 * Return: On success 0.
 * On error, 1 is returned.
 */
int _isalpha(int c)
{
	int a;

	if (c >= 97 && c <= 122)
	{
		a = 1;
	} else if (c >= 65 && c <= 90)
	{
		a = 1;
	} else
	{
		a = 0;
	}
	return (a);
}
